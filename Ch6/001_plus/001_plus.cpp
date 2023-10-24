// 001_plus.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int plus(int a, int b)
{
  return a + b;
}

int minus(int a, int b)
{
  return a - b;
}

int main()
{
  int sum = plus(3, 5);

  printf("%d\n", sum);
  printf("%d\n", minus(3, 5));
}

