// 058_cafe.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

enum Size { Short, Tall, Grande, Venti, Last };
char sizeName[][7] = { "Short", "Tall", "Grande", "Venti" };
int priceAmericano[] = { 3800, 4100, 4600, 5100 };
int priceCapucciono[] = { 4600, 5900, 6400, 6900 };

int main()
{
  printf("커피가격표(아메리카노)\n");
  for (int i = Short; i <= Venti; i++)
    printf("%10s:%5d\n", sizeName[i], priceAmericano[i]);

  printf("커피가격표(카푸치노)\n");
  for (int i = Short; i <= Venti; i++)
    printf("%10s:%5d\n", sizeName[i], priceCapucciono[i]);

  printf("\n");
  printf("커피가격표(아메리카노)\n");
  for (int i = Short; i != Last; i++)
    printf("%10s:%5d\n", sizeName[i], priceAmericano[i]);

  printf("커피가격표(카푸치노)\n");
  for (int i = Short; i != Last; i++)
    printf("%10s:%5d\n", sizeName[i], priceCapucciono[i]);
}
