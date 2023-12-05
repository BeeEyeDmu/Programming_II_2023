// 01_template.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Vector2 {
private: 
  float x, y;
public:
  Vector2() : x(0), y(0) {}
  Vector2(float x, float y) : x(x), y(y) {}
  float GetX() const { return x; }
  float GetY() const { return y; }
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

template <typename T>
T getArraySum(const T arr[], int n)
{
  T sum = arr[0];
  for (int i = 1; i < n; i++)
    sum += arr[i];
  return sum;
}

int main()
{
  int iarr[5] = { 1,3,5,7,9 };
  double darr[7] = { 1.3, 4.5, 6.4, 6.8, 4.1, 9.8, 9.5 };
  Vector2 varr[3] = { Vector2(1,2), Vector2(3,4), Vector2(5,6) };
  string sarr[4] = { "hello", "world", "merry", "christmas" };

  int isum = getArraySum<int>(iarr, 5);
  double dsum = getArraySum<double>(darr, 7);
  Vector2 vsum = getArraySum<Vector2>(varr, 3);
  string ssum = getArraySum<string>(sarr, 4);

  cout << isum << endl;
  cout << dsum << endl;
  cout << "(" << vsum.GetX() << ", " << vsum.GetY() << ")" << endl;
  cout << ssum << endl;
}

