// 067_Point.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Point {
private:
  int x;
  int y;
public:
  Point() {
    x = 0;
    y = 0;
  }
  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }
  void SetX(int x) {
    this->x = x;
  }
  int GetX() {
    return x;
  }
  void SetY(int y) {
    this->y = y;
  }
  int GetY() {
    return y;
  }
  double distance(Point p) {
    return sqrt((x - p.GetX()) * (x - p.GetX()) +
      (y - p.GetY()) * (y - p.GetY()));
  }
};

int main()
{
  Point p1, p2;

  p1.SetX(10);
  p1.SetY(10);
  p2.SetX(20);
  p2.SetY(20);

  cout << "(" << p1.GetX() << ", " << p1.GetY() << ")" << endl;
  cout << "(" << p2.GetX() << ", " << p2.GetY() << ")" << endl;

  Point p3, p4(10, 20);
  cout << "(" << p3.GetX() << ", " << p3.GetY() << ")" << endl;
  cout << "(" << p4.GetX() << ", " << p4.GetY() << ")" << endl;

  cout << "p3와 p4이 거리 = " << p3.distance(p4) << endl;
}
