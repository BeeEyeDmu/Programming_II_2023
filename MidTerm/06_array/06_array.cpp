// 06_array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// n개의 값을 배열에 저장
// 최소, 최대값을 출력
#include <stdio.h>

int main()
{
  int a[100];
  int n;

  printf("입력할 숫자의 갯수 : ");
  scanf_s("%d", &n);

  printf("n개의 숫자를 입력 : ");
  for (int i = 0; i < n; i++)
    scanf_s("%d", &a[i]);

  int min = a[0];
  int max = a[0];

  for (int i = 1; i < n; i++) {
    if (min > a[i])
      min = a[i];
    else if (max < a[i])
      max = a[i];
  }

  printf("최대: %d, 최소:%d\n", max, min);
}
