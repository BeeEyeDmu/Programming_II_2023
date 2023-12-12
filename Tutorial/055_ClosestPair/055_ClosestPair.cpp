// 055_ClosestPair.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define CNT 100

struct Point {
  int x, y;
};

double distance(Point p1, Point p2) {
  return sqrt((p2.x - p1.x) * (p2.x - p1.x)
    + (p2.y - p1.y) * (p2.y - p1.y));
}

void PrintPoints(Point pnt[]) {
  for (int i = 0; i < CNT; i++)
    printf("pnt[%d] = (%d, %d)\n", i, pnt[i].x, pnt[i].y);
}

int main()
{
  Point pnt[CNT];

  // 좌표를 랜덤하게 초기화
  srand(time(NULL));  // 시드 설정
  for(int i=0; i<CNT; i++)  {
    pnt[i].x = rand() % 1000;
    pnt[i].y = rand() % 1000;
  }

  PrintPoints(pnt);

  double min = INT_MAX;
  int min_i, min_j; // 가장 가까운 두 점의 pnt[]의 인덱스

  for(int i=0; i<CNT; i++)
    for(int j=i+1; j<CNT; j++)
      if (min > distance(pnt[i], pnt[j])) {
        min = distance(pnt[i], pnt[j]);
        min_i = i;
        min_j = j;
      }

  printf("pnt[%d]=(%d,%d) ~ pnt[%d]=(%d,%d) : %f\n",
    min_i, pnt[min_i].x, pnt[min_i].y,
    min_j, pnt[min_j].x, pnt[min_j].y, min);
}
