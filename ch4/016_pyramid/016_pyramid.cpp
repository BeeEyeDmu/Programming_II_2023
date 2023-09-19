// 016_pyramid.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("n을 입력 : ");
    scanf_s("%d", &n);

    // 반 피라미드 그리기
    // 1. n줄 그린다
    // 2. 각 줄에서는 바깥 루프의 i개 만큼 그린다
    for (int i = 1; i <= n; i++) {  // 몇번째 줄
        // i개만큼 *을 그린다
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // 피라미드 그리기
    //       *
    //      ***
    //     *****
    //    *******
    for (int i = 1; i <= n; i++) {
        // 빈칸: (n-i)개
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        // 별표: 2*i-1 개
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // 반피라미드2
    // ....*  i=1  빈칸=n-i, *=i
    // ...**
    // ..***
    // .****
    // *****
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // 역피라미드
    // *******  i=1  빈칸 = i-1, * = 2*(n-i)+1
    // .*****
    // ..***
    // ...*
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i - 1; j++)
            printf(" ");
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
            printf("*");
        printf("\n");
    }
}
