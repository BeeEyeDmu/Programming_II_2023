// 05_functionPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

bool compare(int a, int b) {
  return a == b;
}

int main()
{
  bool (*fp)(int, int);

  fp = &compare;  // fp = compare;

  bool res1 = (*fp)(1, 3);
  bool res2 = fp(10, 10);
  cout << res1 << " " << res2 << endl;
  /*cout << compare(10, 10);*/
}
 