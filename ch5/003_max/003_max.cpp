// 003_max.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

  // 최대값을 찾는다
  int max = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] > max)
      max = a[i];

  printf("max = %d\n", max);

  // 최소값을 찾는다
  int min = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] < min)
      min = a[i];

  printf("min = %d\n", min);

  // 최소, 최대값을 하나의 반복문에서 찾기
  max = min = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] > max)
      max = a[i];
    else if (a[i] < min)
      min = a[i];

  printf("max = %d, min = %d\n", max, min);

}
