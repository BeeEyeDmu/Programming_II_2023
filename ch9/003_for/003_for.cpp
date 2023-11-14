// 003_for.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
  int a[] = { 10, 20, 30, 40 };

  for (int i = 0; i < 4; i++)
    cout << a[i] << " ";
  cout << endl;

  for (int x : a)
    cout << x << ' ';
  cout << endl;

  for (int &i : a)
    i++;

  for (int x : a)
    cout << x << ' ';
  cout << endl;
}
