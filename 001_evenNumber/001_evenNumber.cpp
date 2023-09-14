// 001_evenNumber.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("숫자 입력 : ");
    scanf_s("%d", &n);

    if (n % 2 == 0) {  // 문장 블록
        printf("%d는 짝수입니다.", n);
        printf("짝수라니까요!");
    }
    else {
        printf("%d는 홀수입니다.", n);
        printf("홀수라니까요!");
    }

}
