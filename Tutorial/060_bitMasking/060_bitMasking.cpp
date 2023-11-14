// 060_bitMasking.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int a;

  printf("정수 입력 : ");
  scanf_s("%d", &a);

  // (60) 정수의 아래에서 3번째 비트가 0인지 1인지 체크하라
  int mask = 4; // 0x04;

  if ((a & mask) == 0)
    printf("%d의 아래에서 세번째 비트가 0입니다.\n", a);
  else
    printf("%d의 아래에서 세번째 비트가 1입니다.\n", a);

  // (61) 아래에서 4개의 비트만 꺼내서 출력하라
  mask = 0x0F;
  printf("%d=%X\n", a & mask, a & mask);

  // 비트연산자를 이용하여 정수를 2, 4, 8, 16배 곱하기
  for (int i = 1; i <= 4; i++)
    printf("%d번 시프트 : %d\n", i, a << i);
}
