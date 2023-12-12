// 050_Rectangle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <math.h>

struct point
{
  int x, y;
};

struct rectangle {
  point p1;
  point p2;
};

double distance(point a, point b);
double area(point a, point b);

int main()
{
  point a, b;

  printf("한 점의 x, y좌표를 입력: ");
  scanf_s("%d %d", &a.x, &a.y);
  printf("(%d, %d)\n", a.x, a.y);

  printf("또 한 점의 x, y좌표를 입력: ");
  scanf_s("%d %d", &b.x, &b.y);
  printf("(%d, %d)\n", b.x, b.y);

  printf("두 점 사이의 거리 : %f\n", distance(a, b));
  printf("두 점으로 만드는 사각형의 면적 : %f\n", area(a, b));
}

double distance(point a, point b)
{
  return sqrt((b.x - a.x) * (b.x - a.x)
    + (b.y - a.y) * (b.y - a.y));
}

double area(point a, point b)
{
  return abs(b.x - a.x) * abs(b.y - a.y);
}