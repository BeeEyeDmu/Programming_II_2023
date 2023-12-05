// 09_minFunctionObject.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Func {
public:
  virtual int operator() (int n) const = 0;
};

class Square : public Func {
public:
  int operator() (int n) const { return n * n; }
};

class MyFunc : public Func {
public:
  int operator() (int n) const { return n*(n-15)/2; }
};

int arrFnMin(const int arr[], int n, const Func& f) {
  int min = f(arr[0]);

  for (int i = 1; i < n; i++)
    if (min > f(arr[i]))
      min = f(arr[i]);

  return min;
}

int main()
{
  int arr[7] = { 1, -4 , 6 , 8, 10, 5, 7 };

  Square square;
  MyFunc myFunc;

  cout << arrFnMin(arr, 7, square) << endl;
  cout << arrFnMin(arr, 7, myFunc) << endl;
}
