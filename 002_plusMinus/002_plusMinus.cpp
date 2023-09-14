// 002_plusMinus.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main() 
{
    int n;  

    printf("숫자 입력 : "); 
    scanf_s("%d", &n); 
    
    if (n > 0) 
        printf("양수입니다.\n"); 
    else if (n == 0) 
        printf("0입니다.\n");  
    else
        printf("음수입니다.\n");
}
