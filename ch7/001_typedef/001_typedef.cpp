// 001_typedef.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  typedef unsigned short int age_t;
  age_t age;

  printf("나이를 입력: ");
  scanf_s("%hu", &age);   // unsigned: u, short: h
  printf("나이는 %d\n", age);

  //unsigned short int your_age;
  age_t your_age;
  your_age = age + 1;
  printf("당신의 나이는 %d\n", your_age);

  const char* name = "steve";
  char n[10] = "steve";

  typedef const char* string;
  string s = "steve";

  float pos[2] = { 1.0, 2.0 };

  typedef float point_t[2]; // point_t는 float [2]이다
  point_t x = { 10.0, 20.0 };
}
