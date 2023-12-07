// 055_1_Sort.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#define CNT 10
using namespace std;

int main()
{
  int a[CNT] = { 54, 34, 76, 89, 56, 24, 71, 98, 34, 77 };

  for(int i=0; i<CNT; i++)
    for(int j=i+1; j<CNT; j++)
      if (a[i] > a[j]) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }

  for (int i = 0; i < CNT; i++)
    cout << a[i] << " ";
  cout << endl;
}
