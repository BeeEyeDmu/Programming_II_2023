// 005_fgets.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define SIZE 80
#include <stdio.h>
#include <string.h>

int main()
{
  char s[SIZE];

  fgets(s, SIZE, stdin);
  puts(s);

  char str[] = "123 45";
  int a;

  sscanf_s(str, "%d", &a);
  printf("%d\n", a);

  printf("정수 입력 : ");
  scanf_s("%d", &a);

  char sa[10];
  sprintf_s(sa, "%d", a);

  int len = strlen(sa);
  printf("%s는 %d자리 수입니다.", sa, len);
}
 