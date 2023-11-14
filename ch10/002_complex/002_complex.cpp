// 002_complex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Complex {
private:
  double real;  // 실수
  double imag;  // 허수
public:
  // 생성자: 리턴값이 없고 클래스와 이름이 같은 함수
  Complex() {
    real = 0;
    imag = 0;
  }
  Complex(double real, double imag) {
    this->real = real;
    this->imag = imag;
  }
  double GetReal() { return real; }
  double GetImag() { return imag; }
};

int main()
{
  Complex c1;
  Complex c2; // Complex c2(); 이건 안됨
  Complex c3(2, 3);
  Complex c4 = Complex(3, 4);

  cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
  cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
  cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;
  cout << "c4 = " << c4.GetReal() << ", " << c4.GetImag() << endl;
}
