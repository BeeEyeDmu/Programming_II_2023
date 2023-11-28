// 075_Point.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Point {
private:
  int x, y;
public:
  //Point() { // 매개변수가 없는 생성자(디폴트 생성자)
  //  x = 0;
  //  y = 0;
  //}
  Point(int x = 0, int y = 0) { // 디폴트 매개변수
    this->x = x;
    this->y = y;
  }
  void Set(int x, int y) {
    this->x = x;
    this->y = y;
  }
  void Print() {
    cout << "(" << x << ", " << y << ")" << endl;
  }
};

int main()
{
  Point a(10, 20);
  Point b;

  b.Set(30, 30);
  a.Print();
  b.Print();
}
