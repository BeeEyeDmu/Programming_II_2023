// 045_cycle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

void cycle(int* a, int* b, int* c)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = *c;
  *c = tmp;
}
int main()
{
  int a, b, c;

  printf("세 숫자 입력: ");
  scanf_s("%d %d %d", &a, &b, &c);

  cycle(&a, &b, &c);
  printf("세 숫자 : %d %d %d\n", a, b, c);
}
