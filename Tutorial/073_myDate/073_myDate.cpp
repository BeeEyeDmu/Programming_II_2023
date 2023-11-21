// 073_myDate.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class MyDate {
private:
  int year;
  int month;
  int day;

public:
  MyDate(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
  }

  void show() {
    cout << year << "년 " << month << "월 " << day << "일" << endl;
  }
};
int main()
{
  MyDate christmas(2023, 12, 25);
  MyDate parentsday(2024, 5, 8);

  cout << "크리스마스 : ";
  christmas.show();

  cout << "어버이날 : ";
  parentsday.show();

}
