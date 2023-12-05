// 07_lambda.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
//람다식(lambda expression)

#include <iostream>
using namespace std;

int arrFnMin(int a[], int n, int (*f)(int))
{
  int min = f(a[0]);

  for (int i = 1; i < n; i++)
    if (min > f(a[i]))
      min = f(a[i]);

  return min;
}

int main()
{
  int a[] = { 1,2,3,4,5,6,7 };

  cout << arrFnMin(a, 7, [](int n)->int {return n * n; }) << endl;
  cout << arrFnMin(a, 7, [](int n)->int {return n * (n-15)/2; }) << endl;
}
