// 011_power.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
// 2의 n승을 출력하라
// 2를 n번 곱한다(f. sum)
// n번 반복
// for(int i=0; i<n; i++)
// for(int i=1; i<=n; i++)
#include <stdio.h>

int main()
{
    // 반복을 몇번하는가? 
    // 반복을 어떻게 하는가?
    // 
    // 10번 반복
    // for(int i=1; i<=10; i++)
    // for(int i=0; i<10; i++)

    // 2의 n승 = 2를 n번 곱한다 -> n번 반복

    int n;

    printf("n을 입력하세요 : ");
    scanf_s("%d", &n);

    int pow = 1;    // 곱하는 것이므로 초기화를 1로 한다
    //for (int i = 0; i < n; i++)
    //    pow *= 2;

    //printf("2의 %d승은 %d\n", n, pow);
    for (int i = 1; i <= 10; i++) {
        pow *= 2;
        printf("2^%d = %d\n", i, pow);
    }
}
