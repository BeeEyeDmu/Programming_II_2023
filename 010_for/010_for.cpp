// 010_for.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// n부터 1까지 하나씩 감소하는 숫자를 출력
#include <stdio.h>

int main()
{
    int n;

    printf("n을 입력: ");
    scanf_s("%d", &n);

    //for (; n >= 1; n--) {
    //    printf("%d ", n);
    //}

    for (; ; n--) {
        printf("%d ", n);
    }
}
