// 017_gugudan.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  // 1. n을 입력하면 n단을 출력
  //    3 * 1 = 3
  //    3 * 2 = 6
  //    ...
  //    3 * 9 = 27
  int n;

  printf("n을 입력 : ");
  scanf_s("%d", &n);

  for (int i = 1; i <= 9; i++)
    printf("%d x %d = %d\n", n, i, n * i);

  // 2. 2단에서 9단까지 구구단을 출력
  for (int n = 2; n <= 9; n++) {
    for (int i = 1; i <= 9; i++)
      printf("%d x %d = %d\n", n, i, n * i);
    printf("\n");
  }
}
