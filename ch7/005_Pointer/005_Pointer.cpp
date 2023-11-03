// 005_Pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

struct ProductInfo {
  int num;
  char name[100];
  int cost;
};

int main()
{
  ProductInfo x = { 100, "제주 한라봉", 20000 };
  ProductInfo* p = &x;

  printf("상품번호 : %d\n", x.num);
  printf("상품이름 : %s\n", x.name);
  printf("상품가격 : %d\n", x.cost);

  // 포인터를 이용하여 출력해보자
  printf("상품번호 : %d\n", (*p).num);
  printf("상품이름 : %s\n", (*p).name);
  printf("상품가격 : %d\n", (*p).cost);

  // 간단한 표기법
  printf("상품번호 : %d\n", p->num);
  printf("상품이름 : %s\n", p->name);
  printf("상품가격 : %d\n", p->cost);
}
