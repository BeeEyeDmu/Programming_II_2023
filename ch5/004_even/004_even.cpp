// 004_even.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int n;
  int a[100];

  printf("입력할 숫자의 개수 : ");
  scanf_s("%d", &n);

  printf("%d개의 숫자를 입력 : ", n);
  for (int i = 0; i < n; i++)
    scanf_s("%d", &a[i]);

  // 짝수와 홀수의 갯수를 출력하시오
  int even = 0, odd = 0;
  for (int i = 0; i < n; i++) 
    if (a[i] % 2 == 0)
      even++;
    else
      odd++;

  printf("짝수 : %d, 홀수 : %d\n", even, odd);

}
