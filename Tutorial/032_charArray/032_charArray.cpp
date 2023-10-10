// 032_charArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
  char s[10];

  printf("입력 : ");
  //scanf_s("%s", s, sizeof(s));
  scanf("%s", s);

  printf("%s\n", s);

  for (int i = 0; s[i] != '\0'; i++)
    printf("%c\n", s[i]);

  for (int i = 0; i<strlen(s); i++)
    printf("%c\n", s[i]);
}
