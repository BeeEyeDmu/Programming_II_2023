// 007_2DArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
  int x[5] = { 1,2,3,4,5 };
  int a[2][3] = { {1,2,3}, {4,5,6} };

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}


	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	for (int i = 0; i < 3; i++) {// 행
		for (int j = 0; j < 4; j++)	// 열
			printf("%4d", arr[i][j]);
		printf("\n");
	}

	// 배열의 초기화
	int aa[] = { 1,2,3,4,5 };
	int bb[5] = { 0, 1, 2 };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", bb[i]);
	}
	printf("\n");

	int cc[2][3] = { {10}, {40, 50} };
	for (int i = 0; i < 2; i++) {// 행
		for (int j = 0; j < 3; j++)	// 열
			printf("%4d", cc[i][j]);
		printf("\n");
	}

}
