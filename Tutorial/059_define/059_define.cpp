// 059_define.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#define SQUARE(x) ((x)*(x))

int main()
{
  int a = 5;

  printf("%d %d %d\n",
    SQUARE(a), SQUARE(a + 1), 100 / SQUARE(a));
}
