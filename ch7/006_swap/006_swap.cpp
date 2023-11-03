// 006_swap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

struct ProductInfo {
  int num;
  char name[100];
  int cost;
};

void PrintProductInfo(ProductInfo x)
{
  printf("상품번호 : %d\n", x.num);
  printf("상품이름 : %s\n", x.name);
  printf("상품가격 : %d\n", x.cost);
}

void PrintProductPointer(ProductInfo* p)
{
  printf("상품번호 : %d\n", p->num);
  printf("상품이름 : %s\n", p->name);
  printf("상품가격 : %d\n", p->cost);
}

void ProductSwap(ProductInfo* x, ProductInfo* y)
{
  ProductInfo tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}

int main()
{
  ProductInfo x = { 1001, "제주 한라봉", 20000 };
  ProductInfo y = { 1002, "성주 꿀참외", 10000 };

  PrintProductInfo(x);  // x의 멤버를 출력하는 함수
  PrintProductInfo(y);

  PrintProductPointer(&x);
  PrintProductPointer(&y);

  ProductSwap(&x, &y);
  PrintProductPointer(&x);
  PrintProductPointer(&y);
}
