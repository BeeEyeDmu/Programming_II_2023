// 013_multiplesOfThree.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("n을 입력 : ");
    scanf_s("%d", &n);

    // 1. 3의 배수를 출력
    for (int i = 1; i <= n; i++)
        if (i % 3 == 0)
            printf("%d ", i);
    printf("\n");

    // 2. 3의 배수가 아니면 출력
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0)
            continue;
        printf("%d ", i);
    }
    printf("\n");
}
