// 071_circle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Circle {
private:
  int radius;
public:
  Circle(int r = 0) {
    this->radius = r;
  }
  double GetArea() {
    return 3.14 * radius * radius;
  }
};

int main()
{
  Circle donut(5);
  Circle pie(10);
  Circle pizza(15);

  cout << "도넛의 면적 : " << donut.GetArea() << endl;
  cout << "파이의 면적 : " << pie.GetArea() << endl;
  cout << "피자의 면적 : " << pizza.GetArea() << endl;
}
