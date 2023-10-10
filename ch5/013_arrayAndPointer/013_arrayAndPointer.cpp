// 013_arrayAndPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int a[10] = { 1,2,3,4,5,6,7,8,9,10 };

  for (int i = 0; i < 10; i++)
    printf("a[%d]의 주소: %d, 내용: %d\n", 
      i, &a[i], a[i]);

  // 배열의 이름은 배열 첫번째 원소의 주소이다
  printf("%d %d\n", a, &a[0]);

  int *p = a;   // int *p = &a[0];
  printf("%d %d\n", a + 3, &a[3]);

  printf("%d %d\n", p + 3, &p[3]);

  printf("%d %d\n", a[3], p[3]);

  for (int i = 0; i < 10; i++) {
    printf("a[%d] = %d = %d\n", i, a[i], *(a + i));
    printf("p[%d] = %d = %d\n", i, p[i], *(p + i));
  }

  for (int* ptr = a; ptr < a + 10; ptr++)
    printf("%d\n", *ptr);

  printf("%d %d %d\n", a, &a[0], &a);
}
