// p.150 종합문제4번
// 10x10 이하의 이차원 배열
// 행, 열
// 원소의 값이 입력으로 주어짐

#include <stdio.h>

int main()
{
	int a[10][10];
	int row, col;

	scanf_s("%d %d", &row, &col);

	// 이차원배열에 숫자를 입력
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			scanf_s("%d", &a[i][j]);

	// 출력
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}

	// 각 행의 요소의 합을 구하시오
	for (int i = 0; i < row; i++) {
		int sum = 0;
		for (int j = 0; j < col; j++)
			sum += a[i][j];
		printf("%d행의 합 = %d\n",i, sum);
	}
}
