// 12_map.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<string, int> fruitCnt;

  fruitCnt["apple"] = 7;
  fruitCnt["banana"] = 4;
  fruitCnt["orange"] = 10;

  cout << fruitCnt["banana"] << endl;

  for (pair<string, int> i : fruitCnt)
    cout << i.first << " : " << i.second << endl;

  for (auto i : fruitCnt)
    cout << i.first << " : " << i.second << endl;
}
