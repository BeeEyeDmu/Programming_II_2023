// 001_dynamicMemoryAllocation.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 랜덤하게 100개이 정수를 배열에 저장하고
// 1. 출력한다
// 2. 가장 큰 값을 출력한다
// 3. 가장 작은 값을 출력한다
// 4. 평균  값을 출력한다
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// GitHub.com
// Programming_II_2023
// BeeEyeDmu / Programming_II_2023

int main()
{
  // int a[100];
  int* a;
  int n;  // 데이터의 갯수

  printf("몇개의 데이터 : ");
  scanf_s("%d", &n);

  a = (int*)malloc(n * sizeof(int));  // 동적메모리 할당

  srand(time(NULL));
  for (int i = 0; i < n; i++)
    a[i] = rand();

  // 출력
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
  printf("\n");

  // 최소, 최대, 평균
  int min = a[0], max = a[0], sum = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] < min)
      min = a[i];
    else if (a[i] > max)
      max = a[i];
    sum += a[i];
  }
  printf("min = %d, max = %d, avg = %f\n",
    min, max, (double)sum / n);

  free(a);
}
