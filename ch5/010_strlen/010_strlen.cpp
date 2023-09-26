// 010_strlen.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <string.h>

int main()
{
  char s[100] = "hello";
  printf("%d\n", strlen(s));

  char t[100];
  strcpy_s(t, s);
  printf("%s\n", t);

  char name[100];
  printf("이름 입력 : ");
  scanf_s("%s", name, sizeof(name));

  strcat_s(t, name);
  strcat_s(t, "!");
  printf("%s\n", t);

  char s1[] = "sample";
  char s2[] = "simple";

  printf("%d\n", strcmp(s1, s2));
  if (strcmp(s1, s2) < 0)
    printf("%s가 %s보다 사전순으로 빠르다\n", s1, s2);
  else if (strcmp(s1, s2) == 0)
    printf("%s과 %s는 같다\n", s1, s2);
  else
    printf("%s가 %s보다 사전순으로 늦다\n", s1, s2);
}
