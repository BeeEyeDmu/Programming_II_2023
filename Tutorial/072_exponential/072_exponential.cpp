// 072_exponential.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Exponential {
private:
  int base;
  int exp;
public:
  Exponential(int b = 1, int e = 1) {
    this->base = b;
    this->exp = e;
  }
  int getValue() { return (int)pow(base, exp);  }
  int getBase() { return this->base; }
  int getExp() { return this->exp; }
  bool equals(Exponential b) {
    if (pow(base, exp) == pow(b.base, b.exp))
      return true;
    else
      return false;
  }
};

int main()
{
  Exponential a(4, 2);  // 4의 2승
  Exponential b(16);    // 16의 1승
  Exponential c;        // 디폴트 생성자 사용(1의 1승)

  cout << a.getValue() << " " << b.getValue() << " " << c.getValue() << endl;

  cout << "a의 베이스 : " << a.getBase()
    << ", 지수 : " << a.getExp() << endl;

  if (a.equals(b))
    cout << "같다" << endl;
  else
    cout << "다르다" << endl;
}