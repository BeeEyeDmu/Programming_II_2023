// 002_reverse.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	// n개의 숫자를 입력받아 거꾸로 순서대로 출력
	int n;
	int a[1000];

	printf("입력할 숫자의 개수 : ");
	scanf_s("%d", &n);

	printf("%d개의 숫자를 입력 : ", n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	printf("똑바로 출력 : ");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	printf("거꾸로 출력 : ");
	for (int i = n - 1; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");
	//
}
