// 004_ProductInfo.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <string.h>

struct ProductInfo {
  int num;
  char name[100];
  int cost;
};

int main()
{
  ProductInfo myProduct 
    = { 100, "제주 한라봉", 20000 };
  ProductInfo x;
  x = myProduct;

  printf("상품번호 : %d\n", myProduct.num);
  printf("상품이름 : %s\n", myProduct.name);
  printf("상품가격 : %d\n", myProduct.cost);

  x.num = myProduct.num + 1;
  //x.name = "제주 한라봉(할인상품)";
  strcpy_s(x.name, 100, "제주 한라봉(할인상품)");
  x.cost = myProduct.cost * 0.9;

  printf("상품번호 : %d\n", x.num);
  printf("상품이름 : %s\n", x.name);
  printf("상품가격 : %d\n", x.cost);

  printf("sizeof ProductInfo = %d\n", 
    sizeof(ProductInfo));

  printf("주소 : %p\n", &myProduct);
  printf("주소(상품번호) : %p\n", &myProduct.num);
  printf("주소(상품이름) : %p\n", &myProduct.name);
  printf("주소(상품가격) : %p\n", &myProduct.cost);
}
