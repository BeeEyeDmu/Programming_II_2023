// 070_recctangle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Point {
private:
  int x, y;
public:
  Point(int x=0, int y=0) {
    this->x = x;
    this->y = y;
  }
  int GetX() { return x; }
  int GetY() { return y; }
};

class Rectangle {
private:
  Point p1, p2;
public:
  Rectangle(Point p1, Point p2) {
    this->p1 = p1;
    this->p2 = p2;
  }
  int GetArea() {
    return abs((p1.GetX() - p2.GetX()) * (p1.GetY() - p2.GetY()));
  }
};

int main()
{
  int x, y;

  cout << "p1의 좌표를 입력하세요 : ";
  cin >> x >> y;

  Point p1(x, y);

  cout << "p2의 좌표를 입력하세요 : ";
  cin >> x >> y;

  Point p2(x, y);
  Rectangle r(p1, p2);
  cout << "사각형 면적은 " << r.GetArea() << endl;
}
