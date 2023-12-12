// 051_studentInfo.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

// 학생정보: 학과, 학년, 학번, 이름, 전화번호
struct Student {
  char dept[20];  // 학과
  int year;       // 학년
  int id;         // 학번
  char name[20];  // 이름
  char phone[20]; // 전화번호
};

int main()
{
  Student a;

  printf("학과 : ");
  scanf_s("%s", a.dept, sizeof(a.dept));
  printf("학년 : ");
  scanf_s("%d", &a.year);
  printf("학번 : ");
  scanf_s("%d", &a.id);
  printf("이름 : ");
  scanf_s("%s", a.name, 20);
  printf("전화번호 : ");
  scanf_s("%s", a.phone, 20);

  printf("학과 : %s\n", a.dept);
  printf("학년 : %d\n", a.year);
  printf("학번 : %d\n", a.id);
  printf("이름 : %s\n", a.name);
  printf("전화번호 : %s\n", a.phone);
}
