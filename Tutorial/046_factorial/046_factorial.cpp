// 046_factorial.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int n;

  printf("n을 입력: ");
  scanf_s("%d", &n);

  // (반복문 방법) n! = 1*2*3*...*(n-1)*n
  int fact = 1;
  for (int i = 1; i <= n; i++)
    fact *= i;

  int sum = 0;
  for (int i = 1; i <= n; i++)
    sum += i;
  printf("%d! = %d\n", n, fact);

}
