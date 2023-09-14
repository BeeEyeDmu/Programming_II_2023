// 006_do_while.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main() 
{
    int i = 1;

    do {
        printf("%d\n", i++);
    } while (i <= 10);

    // 0을 입력할 때까지 입력받은 수를 출력하는 프로그램
    int n;
    do {
        printf("0을 입력하면 종료\n");
        scanf_s("%d", &n);
    } while (n != 0);

}
