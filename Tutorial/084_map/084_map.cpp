// 084_map.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>
using namespace std;

int main()
{
  map<string, string> f;

  f["강병익"] = "010-2222-3333";
  f["조용석"] = "010-3333-8787";
  f["김병수"] = "010-7412-5896";  

  f.insert(pair<string, string>("홍길동", "010-9999-8888"));
  f.insert(pair<string, string>("임꺽정", "010-5555-3333"));
  f.insert(pair<string, string>("성춘향", "010-1111-2121"));

  for (auto i : f)
    cout << i.first << " : " << i.second << endl;

  cout << "iterator 사용" << endl;
  map<string, string>::iterator itr;  // iterator itr은 포인터이다
  for(itr = f.begin(); itr!=f.end(); itr++)
    cout << itr->first << " : " << itr->second << endl;
}
