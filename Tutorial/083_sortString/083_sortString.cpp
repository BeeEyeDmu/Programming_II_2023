// 083_sortString.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<string>v;
  string s;

  for (int i = 0; i < 10; i++) {
    cout << "문자열 입력 : ";
    cin >> s;
    v.push_back(s);
  }
  sort(v.begin(), v.end());

  for (auto i : v)
    cout << i << " ";
  cout << endl;
}