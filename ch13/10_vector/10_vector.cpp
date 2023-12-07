// 10_vector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  for (auto i : v)
    cout << i << " ";
  cout << endl;

  vector<int> v2 = { 10, 20, 30 };
  for (int i : v2)
    cout << i << " ";
  cout << endl;

  vector<int> v3 = v;
  v3[1] = 50;
  for (int i : v3)
    cout << i << " ";
  cout << endl;
}
