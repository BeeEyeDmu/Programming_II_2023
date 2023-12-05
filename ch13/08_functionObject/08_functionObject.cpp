// 08_functionObject.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Equals {
private:
  int value;
public:
  //Equals(int v) {    value = v;  }
  Equals(int v) : value(v) {}
  bool operator() (int x) { // 연산자 오버로딩
    return x == value;
  }
};

int main()
{
  Equals eq(123); // 객체 생성

  cout << eq(12) << endl;
  cout << eq(123) << endl;

}
