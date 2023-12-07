// 11_pair.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
  pair<int, string> a = { 123, "abc" };
  cout << a.first << " " << a.second << endl;

  a.second = "Hello";
  cout << a.first << " " << a.second << endl;
}
