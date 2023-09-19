// 003_sort3Numbers.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("세개의 숫자를 입력 : ");
    scanf_s("%d %d %d", &a, &b, &c);

    if (a >= b && b >= c)  // a, b, c
        printf("%d %d %d\n", a, b, c);
    else if (a >= c && c >= b)      // a, c, b
        printf("%d %d %d\n", a, b, c);
    else if (b >= a && a >= c)     // b, a, c
        printf("%d %d %d\n", b, a, c);
    else if (b >= c && c >= a)     // b, c, a
        printf("%d %d %d\n", b, c, a);
    else if (c >= a && a >= b)     // c, a, b
        printf("%d %d %d\n", c, a, b);
    else if (c >= b && b >= a)     // c, b, a
        printf("%d %d %d\n", c, b, a);
    else
        printf("나오면 안되는 경우임!\n");
}
