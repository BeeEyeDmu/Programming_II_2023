// 002_define.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#define PI 3.141592
#define SQUARE(x) ((x)*(x))
const double pi = 3.141592;

enum color {red, blue, black};

int main()
{
  color x;

  x = black;
  printf("%d\n", black);
  if (x == black)
    printf("검은색 옷을 입었다\n");

  printf("%f\n", PI); 
  printf("%f\n", pi);
  printf("%d\n", 100/SQUARE(5));  // 100/((5)*(5))
  // (5+1)*(5+1) // 5+1*5+1
}
