// 038_pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int a = 10, b = 20;
  int* p;

  p = &a;
  *p *= 2;
  printf("%d\n", *p);

  p = &b;
  *p *= 2;
  printf("%d\n", *p);
}
