// 012_factorial.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;
    printf("n을 입력 : ");
    scanf_s("%d", &n);

    // fact = 1*2*...*n
    int fact = 1;   
    for (int i = 1; i <= n; i++) {
        fact *= i;
        printf("%d! = %d\n", i, fact);
    }

    // sum = 1 + 2 + 3 + ... + n
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
        printf("1~%d까지의 합 = %d\n", i, sum);
    }

    int x;
    for (;;) {
        printf("0을 입력할 때까지 계속됩니다 : ");
        scanf_s("%d", &x);
        if (x == 0)
            break;           // 반복을 끝낸다
    }
}
