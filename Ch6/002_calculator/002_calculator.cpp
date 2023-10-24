// 002_calculator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int add(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

float divide(int a, int b)
{
  return (float)a/b;
}

int main()
{
  // 두개의 정수를 입력받아서,
  // 사칙연산의 결과를 출력하는 계산기를 만드시오
  // + - * /
  // 계산은 함수를 사용하세요

  // (1) 두개의 정수를 입력받는다
  int a, b;
  int choice = 0;

  while (1) {
    printf("두개의 정수를 입력 : ");
    scanf_s("%d %d", &a, &b);

    // (2) switch case 문을 이용하여 어떤 계산을 할지
    //     입력받는다
    printf("계산기\n");
    printf("1. 더하기\n");
    printf("2. 빼기\n");
    printf("3. 곱하기\n");
    printf("4. 나누기\n");
    printf("5. 끝내기\n");
    printf("원하는 계산을 선택하세요 : ");
    scanf_s("%d", &choice);

    // (3) 입력받은 계산결과를 출력한다

    switch (choice)
    {
    case 1:
      printf("%d + %d = %d\n", a, b, add(a, b));
      break;
    case 2:
      printf("%d + %d = %d\n", a, b, subtract(a, b));
      break;
    case 3:
      printf("%d + %d = %d\n", a, b, multiply(a, b));
      break;
    case 4:
      printf("%d + %d = %f\n", a, b, divide(a, b));
      break;
    case 5:
      return 0;
    default:
      printf("잘못된 입력입니다.");
      break;
    }
  }
}
