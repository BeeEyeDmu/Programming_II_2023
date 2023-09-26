// 007_bmi.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	double height, weight;

	printf("키를 입력(cm) : ");
	scanf_s("%lf", &height);

	printf("몸무게를 입력(kg) : ");
	scanf_s("%lf", &weight);

	printf("%6s : %6.1f\n", "키", height);
	printf("%6s : %6.1f\n", "몸무게", weight);

	height /= 100;	// cm를 m로 변환
	double bmi = weight / (height * height);
	printf("%6s : %6.1f\n", "bmi", bmi);
}
