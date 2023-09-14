// 009_sum.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
// 1~n 합
#include <stdio.h>

int main()
{
    int sum = 0;    // 반드시 초기화
    int n;

    printf("n을 입력 : ");
    scanf_s("%d", &n);

    // 1. 초기 : i=1
    // 2. 계속하는 조건 : i<=n
    // 3. 변화 : i++
    
    //int i = 1;
    //while (i <= n) {
    //    sum += i;   // sum = sum + i;
    //    i++;
    //}
    /*int i;*/
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("%d\n", i);
    printf("sum = %d\n", sum);
}
