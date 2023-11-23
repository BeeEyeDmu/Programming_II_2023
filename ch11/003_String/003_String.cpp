// 003_String.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

class String {
private:
  char* strData;
  int len;
public:
  String() {
    strData = NULL;
    len = 0;
  }
  String(const char* str) {
    len = strlen(str);
    strData = new char[len + 1];
    strcpy_s(strData, len+1, str);
  }
  // 복사생성자
  String(const String& rhs) {
    len = rhs.len;
    strData = new char[len + 1];
    strcpy_s(strData, len + 1, rhs.strData);
  }
  ~String() {
    if (strData != NULL)
      delete[] strData;
  }
  // 연산자 오버로딩(복사하는 경우에 깊은 복사를 위해
  // 복사대입연산자를 만든다
  String& operator=(const String& rhs) {
    if (this != &rhs) {
      len = rhs.len;
      delete[] strData;
      strData = new char[len + 1];
      strcpy_s(strData, len + 1, rhs.strData);
    }
    return *this;
  }
  const char* GetStrData() const {
    if (strData != NULL)
      return strData;
    else
      return "";
  }
  int GetLen() const {
    return len;
  }
};

int main()
{
  String s1;
  String s2("hello");

  cout << s1.GetLen() << endl;
  cout << s1.GetStrData() << endl;
  cout << s2.GetLen() << endl;
  cout << s2.GetStrData() << endl;

  String s3("Hello");
  String s4 = s3;

  cout << s4.GetLen() << endl;
  cout << s4.GetStrData() << endl;

  String s5(s4);
  cout << s5.GetLen() << endl;
  cout << s5.GetStrData() << endl;

  String str("Hello World!");
  String str2("Hi");

  str2 = str; // 복사대입연산자가 사용된다
  cout << "복사대입연산자" << endl;
  cout << str.GetLen() << endl;
  cout << str.GetStrData() << endl;

  cout << str2.GetLen() << endl;
  cout << str2.GetStrData() << endl;
}
