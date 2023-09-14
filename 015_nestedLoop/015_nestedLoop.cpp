// 015_nestedLoop.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// n을 입력받아 n개의 별을 n개의 줄로 출력하라
#include <stdio.h>

int main()
{
    int n;

    printf("n을 입력 : ");
    scanf_s("%d", &n);

    // n개의 별을 출력
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++)
            printf("*");
        printf("\n");
    }
}
