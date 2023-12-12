// 031_array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int a[10] = { 1,2,3,4,5,6,7,8,9,10
    /*12,54,84,65,79,54,35,64,57,99*/ };

  int evenIndexSum = 0;
  int oddIndexSum = 0;
  int evenSum = 0;
  int oddSum = 0;

  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0)
      evenIndexSum += a[i];
    else
      oddIndexSum += a[i];
    if (a[i] % 2 == 0)
      evenSum += a[i];
    else
      oddSum += a[i];
  }

  printf("짝수 인덱스에 저장된 값의 합 : %d\n", evenIndexSum);
  printf("홀수 인덱스에 저장된 값의 합 : %d\n", oddIndexSum);
  printf("저장된 짝수의 합 : %d\n", evenSum);
  printf("저장된 홀수의 합 : %d\n", oddSum);
}
