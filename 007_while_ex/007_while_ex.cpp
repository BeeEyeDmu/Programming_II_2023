// 007_while_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    // 별표를 n개 출력하기
    int n;
    int i = 1;  // 초기값

    printf("*를 몇개 출력할까요? ");
    scanf_s("%d", &n);

    while (i <= n) {    // index : i , 끝나는 조건
        printf("*");
        i++;            // 변화
    }

}
