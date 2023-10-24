// 003_callbyValue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

void swap(int a, int b)
{
  int tmp = a;  a = b;  b = tmp;
}

void swap2(int* px, int* py)
{
  int tmp = *px;  *px = *py;  *py = tmp;
}

int main()
{
  int a, b;

  scanf_s("%d %d", &a, &b);
  swap(a, b);
  printf("After Swap() : %d %d\n", a, b);
  swap2(&a, &b);
  printf("After Swap2() : %d %d\n", a, b);
}
