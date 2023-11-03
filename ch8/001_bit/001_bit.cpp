// 001_bit.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int a = 4, b = 5;

  printf("a & b = %d\n", a & b);
  printf("a | b = %d\n", a | b);
  printf("a ^ b = %d\n", a ^ b);
  printf("~a = %d\n", ~a);
  printf("a<<2 = %d\n", a << 2);
  printf("a>>2 = %d\n", a >> 2);
}
