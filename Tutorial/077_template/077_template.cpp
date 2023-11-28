// 077_template.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

template <typename T>

void print(T arr, int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main()
{
  int a[] = { 1, 2, 3, 4, 5, 6 };
  double d[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
  string s[] = { "apple", "tomato", "kiwi" };

  print(a, 6);
  print(d, 5);
  print(s, 3);
}
