// 006_random.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  for (int i = 0; i < 5; i++)
    printf("%d\n", rand());

  // 주사위게임(1~6)
  for (int i = 0; i < 100; i++)
    printf("%3d", rand() % 6 + 1);
}
