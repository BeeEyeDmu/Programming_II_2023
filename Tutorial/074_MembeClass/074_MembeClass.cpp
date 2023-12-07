// 074_MembeClass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Member {
private:
  char* name;
  int age;
public:
  Member(const char* name, int age);
  ~Member();
  Member(const Member& rhs);
  void ChangeName(const char* name);
  void Print();
};

Member::Member(const char* name, int age) {
  this->name = new char[strlen(name) + 1];
  strcpy_s(this->name, strlen(name) + 1, name);
  this->age = age;
}

Member::~Member() {
  delete[] name;
}

// 복사생성자
Member::Member(const Member& rhs) {
  this->name = new char[strlen(rhs.name) + 1];
  strcpy_s(this->name, strlen(rhs.name) + 1, rhs.name);
  this->age = rhs.age;
}

void Member::ChangeName(const char* name) {
  delete[] this->name;
  this->name = new char[strlen(name) + 1];
  strcpy_s(this->name, strlen(name) + 1, name);
}

void Member::Print() {
  cout << "Name : " << name << ", Age : " << age << endl;
}

int main()
{
  Member m1("sorong", 20);
  Member m2("bongsu", 19);
  Member m3(m1);

  m1.Print();
  m2.Print();
  m3.Print();

  m2.ChangeName("yongkil");
  m2.Print();
}
