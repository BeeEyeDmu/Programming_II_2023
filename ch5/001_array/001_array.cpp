// 001_array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int a[5];
  int b[5] = { 10, 20, 30, 40, 50 };

  // a[]에 숫자를 5개 입력받고,
  // 출력하시오
  printf("숫자를 입력하세요 : ");
  for (int i = 0; i < 5; i++)     
    scanf_s("%d", &a[i]);

  for (int i = 0; i < 5; i++)
    printf("%d ", a[i]);
  printf("\n");

  for (int i = 0; i < 5; i++)
    printf("%d ", b[i]);
  printf("\n");
}
