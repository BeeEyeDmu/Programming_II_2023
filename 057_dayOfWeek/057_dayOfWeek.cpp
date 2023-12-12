// 057_dayOfWeek.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  enum Day {일요일, 월요일, 화요일, 수요일, 목요일, 금요일, 토요일};
  int day;

  printf("요일을 입력(0=일,1=월,2=화,...,6=토) : ");
  scanf_s("%d", &day);

  switch (day)
  {
  case 월요일:
    printf("월요일\n");
    break;
  case 화요일:
    printf("화요일\n");
    break;
  case 수요일:
    printf("수요일\n");    
    break;
  case 목요일:
    printf("목요일\n");
    break;
  case 금요일:
    printf("금요일\n");
    break;
  case 토요일:
    printf("토요일\n");
    break;
  default:
    printf("잘못입력\n");
    break;
  }
}
