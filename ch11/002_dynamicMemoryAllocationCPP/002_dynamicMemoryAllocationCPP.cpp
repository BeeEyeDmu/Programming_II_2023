// 002_dynamicMemoryAllocationCPP.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 랜덤하게 100개이 정수를 배열에 저장하고
// 1. 출력한다
// 2. 가장 큰 값을 출력한다
// 3. 가장 작은 값을 출력한다
// 4. 평균  값을 출력한다
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int* a;
  int n;  // 데이터의 갯수

  cout << "몇개의 데이터 : ";
  cin >> n;

  a = new int[n];  // 동적메모리 할당

  srand(time(NULL));
  for (int i = 0; i < n; i++)
    a[i] = rand();

  // 출력
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  cout << endl;

  // 최소, 최대, 평균
  int min = a[0], max = a[0], sum = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] < min)
      min = a[i];
    else if (a[i] > max)
      max = a[i];
    sum += a[i];
  }
  cout << "min = " << min << ", max = " << max << ", avg ="
    << (double)sum/n << endl;
     
  delete[] a;
}
