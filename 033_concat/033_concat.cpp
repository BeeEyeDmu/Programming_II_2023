// 033_concat.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <string.h>

int main()
{
  char year[2], studentId[10], name[20];
  char final[50] = { '\0' };

  printf("학년 : ");
  scanf_s("%s", year, 50);  // (int)sizeof(year)
  printf("학번 : ");
  scanf_s("%s", studentId, (int)sizeof(studentId));
  printf("이름 : ");
  scanf_s("%s", name, (int)sizeof(name));

  strcat_s(final, (int)sizeof(final), year);
  strcat_s(final, (int)sizeof(final), "학년 ");
  strcat_s(final, (int)sizeof(final), studentId);
  strcat_s(final, (int)sizeof(final), " ");
  strcat_s(final, (int)sizeof(final), name);

  printf("%s\n", final);
}
