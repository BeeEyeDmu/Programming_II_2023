// 03_tryCatch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int fact(int n)
{
  if (n == 1)
    return 1;
  else
    return n * fact(n - 1);
}

int main()
{
  int n;

	try
	{
		cout << "입력 : ";
		cin >> n;
		if (n <= 0)
			throw n;
		cout << n << "! = " << fact(n) << endl;
	}
	catch (const int e)
	{
		cout << e << ": 자연수가 아닙니다" << endl;
	}
}
