// 037_strncat.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <string.h>

int main()
{
  char s[10];
  char t[10];

  printf("s[] 문자열 입력 : ");
  scanf_s("%s", s, 10);
  printf("t[] 문자열 입력 : ");
  scanf_s("%s", t, 10);

  strncat_s(s, t, _TRUNCATE);
  printf("%s\n", s);
}
