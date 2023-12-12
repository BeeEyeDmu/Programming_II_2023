// 056_enum.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  enum fruitType { 
    Apple, 
    Banana, 
    Orange,
    Last
  };
  // Last를 사용하고 for문에서 i!=Last까지 반복할 수 있다
  // https://stackoverflow.com/questions/261963/how-can-i-iterate-over-an-enum

  fruitType fruit = Apple;
  printf("fruit = %d\n", fruit);

  for(int i = Apple ; i != Last; i++) 
    switch (i) {
    case Apple:
      printf("Apple\n");
      break;
    case Banana:
      printf("Banana\n");
      break;
    case Orange:
      printf("Orange\n");
      break;
    }
}
