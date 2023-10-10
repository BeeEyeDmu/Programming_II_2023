// 012_doublePointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int a = 10;
  int* p = &a;
  int** q = &p;
  int*** r = &q;

  // p, q, r로 a에 저장된 값을 출력하라
  printf("%d %d %d\n", p, q, r);

  printf("%d\n", *p);
  printf("%d\n", **q);
  printf("%d\n", ***r);

  // 주소에 정수를 더한다면 어떤 일이 생길까요?
  // 그 다음번 주소를 나타낸다
  printf("%d %d\n", &a, &a + 1);

  // 포인터에 정수를 더한다
  printf("%d %d\n", p, p + 1);
}
