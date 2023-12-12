// 002_calculator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

double plus(double a, double b)
{
  return a + b;
}

double minus(double a, double b)
{
  return a - b;
}

double multiply(double a, double b)
{
  return a * b;
}

double divide(double a, double b)
{
  return a / b;
}

int main()
{
  double a, b;

  printf("두 숫자를 입력 : ");
  scanf_s("%lf %lf", &a, &b);

  printf("더하기 = %f\n", plus(a, b));
  printf("빼기 = %f\n", minus(a, b));
  printf("곱하기 = %f\n", multiply(a, b));
  printf("나누기 = %f\n", divide(a, b));

}
