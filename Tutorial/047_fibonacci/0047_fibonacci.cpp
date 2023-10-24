// 0047_fibonacci.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int a[20];

  a[0] = a[1] = 1;
  for (int i = 2; i < 20; i++)
    a[i] = a[i - 1] + a[i - 2];

  for (int i = 0; i < 20; i++)
    printf("%d ", a[i]);
  printf("\n");
}
