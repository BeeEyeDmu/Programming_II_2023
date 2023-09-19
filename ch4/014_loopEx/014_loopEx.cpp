// 014_loopEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    // 1. 안녕하세요 10번 출력
    for (int i = 0; i < 10; i++)
        printf("안녕하세요\n");

    // 1-1. *을 10개 출력
    for (int i = 0; i < 10; i++)
        printf("*");
    printf("\n");

    // 2. 10을 10번 출력
    for (int i = 0; i < 10; i++)
        printf("10\n");

    // 3. 1에서 10까지 출력
    for (int i = 1; i <= 10; i++)
        printf("%d ", i);
    printf("\n");

    // 4. 라인번호와 안녕하세요 10번 출력
    for (int i = 1; i <= 10; i++)
        printf("%d 안녕하세요\n", i);

    // 5. 1부터 10까지 합
    int sum = 0;
    for (int i = 1; i <= 10; i++)
        sum += i;
    printf("sum = %d\n", sum);

    // 6. 1부터 10까지 곱
    int fact = 1;
    for (int i = 1; i <= 10; i++)
        fact *= i;
    printf("fact = %d\n", fact);

    // 7. 0.1에서 부터 10.0까지 0.2씩 차이를 두고 출력
    for (float x = 0.1; x <= 10.0; x += 0.2)
        printf("%f\n", x);
}
