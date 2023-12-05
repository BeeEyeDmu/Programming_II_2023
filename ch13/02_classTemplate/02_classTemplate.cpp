// 02_classTemplate.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

template<typename T> 

class Vector2 {
private:
  T x, y;
public:
  Vector2() : x(0), y(0) {}
  Vector2(T x, T y) : x(x), y(y) {}
  T GetX() const { return x; }
  T GetY() const { return y; }
  Vector2 operator+(const Vector2 other) const {
    return Vector2(x + other.x, y + other.y);
  }
  Vector2 operator-(const Vector2 other) const {
    return Vector2(x - other.x, y - other.y);
  }
  Vector2& operator+=(const Vector2 other) {
    x += other.x;
    y += other.y;
    return *this;
  }
  Vector2& operator-=(const Vector2 other) {
    x -= other.x;
    y -= other.y;
    return *this;
  }
};

int main()
{
  Vector2<int> v1(1, 2);
  Vector2<double> v2(1.5, 2.5);

  cout << v1.GetX() << ", " << v1.GetY() << endl;
  cout << v2.GetX() << ", " << v2.GetY() << endl;
}
