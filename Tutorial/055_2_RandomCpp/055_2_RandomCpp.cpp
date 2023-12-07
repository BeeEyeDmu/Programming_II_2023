// 055_2_RandomCpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <random>
#define CNT 100
using namespace std;

class Point {
private:
  int x, y;
public:
  Point() { x = 0; y = 0; }
  Point(int x, int y) { this->x = x; this->y = y; }
  double Distance(Point other) {
    return sqrt((other.x - this->x) * (other.x - this->x)
      + (other.y - this->y) * (other.y - this->y));
  }
  void SetX(int x) { this->x = x; }
  void SetY(int y) { this->y = y; }
  int GetX() { return x; }
  int GetY() { return y; }
};

int main()
{
  Point pnt[CNT];

  random_device rd;
  mt19937 mt(rd());
  uniform_int_distribution<int> dist(0, 999);

  for (int i = 0; i < CNT; i++) {
    pnt[i].SetX(dist(mt));
    pnt[i].SetY(dist(mt));
  }
  
  for (int i = 0; i < CNT; i++)
    cout << "pnt[" << i << "] = (" << pnt[i].GetX() << ", "
    << pnt[i].GetY() << ")" << endl;

  double min = INT_MAX;
  int min_i, min_j;   // 가장 가까운 점 둘의 인덱스

  // find closest pair
  for(int i=0; i<CNT; i++)
    for(int j=i+1; j<CNT; j++)
      if (pnt[i].Distance(pnt[j]) < min) {
        min_i = i;
        min_j = j;
        min = pnt[i].Distance(pnt[j]);
      }

  cout << "최근접 점의 쌍 = [" << min_i << "]-[" << min_j << "] = " << min << endl;
}
