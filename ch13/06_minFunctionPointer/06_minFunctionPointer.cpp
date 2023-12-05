// 06_minFunctionPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int square(int n) { return n * n; }
int myFunc(int n) { return n * (n - 15) / 2; }

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
  int a[7] = { 2,4,-1,-4, 15,5, -17 };

  cout << arrFnMin(a, 7, square) << endl;
  cout << arrFnMin(a, 7, myFunc) << endl;

  for (auto i : a)
    cout << square(i) << " ";
  cout << endl;
  for (auto i : a)
    cout << myFunc(i) << " ";
  cout << endl;
}
