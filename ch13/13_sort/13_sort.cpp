// 13_sort.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 버블정렬
void mySort(int a[], int n) {
  for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++)
      if (a[i] > a[j]) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
}

int main()
{
  int a[7] = { 2, 54, 234, 564, 33, 7, 25 };

  //sort(a, a + 7);
  mySort(a, 7);

  for (int i : a)
    cout << i << " ";
  cout << endl;

  vector<int> v = { 2, 54, 234, 564, 33, 7, 25 };
  sort(v.begin(), v.end());

  for (int i : v)
    cout << i << " ";
  cout << endl;
}
