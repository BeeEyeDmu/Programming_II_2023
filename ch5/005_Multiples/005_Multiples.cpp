// 005_Multiples.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    // 10개의 숫자를 배열에 저장하고
    // 3의 배수만 출력해라
    // 3의 배수가 몇개인지도 출력해라
  int a[10];

  printf("정수 10개 입력 : ");
  for (int i = 0; i < 10; i++)
    scanf_s("%d", &a[i]);

  int cnt = 0;
  for(int i=0; i<10; i++)
    if (a[i] % 3 == 0) {
      cnt++;
      printf("%d ", a[i]);
    }

  printf("\n3의 배수의 개수 : %d\n", cnt);

}
