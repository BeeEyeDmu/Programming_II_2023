// 041_2DarrayPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

  // 배열포인터를 이용해서 2차원 배열의 내용을 출력하세요
  for (int(*pi)[4] = a; pi < a + 3; pi++)
  {
    for (int* pj = *pi; pj < *pi + 4; pj++)
        printf("%4d", *pj);
    printf("\n");
  }
  
}
