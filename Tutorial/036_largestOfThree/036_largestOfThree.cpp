// 036_largestOfThree.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <string.h>

int main()
{
	char a[10], b[10], c[10];
	printf("입력: ");
	scanf_s("%s", a, 10);
	printf("입력: ");
	scanf_s("%s", b, 10);
	printf("입력: ");
	scanf_s("%s", c, 10);

	// strcmp()는 앞에서 뒤를 뺀 결과라고 생각한다
	// abc가 더 작으므로 -1이 나온다
	printf("strcmp = %d\n", strcmp("abc", "def"));

	// 3개의 숫자를 작은 순서대로 출력하는 문제와 같은 문제이다
	if (strcmp(a, b) < 0) {
		if (strcmp(b, c) < 0)
			printf("%s %s %s\n", a, b, c); // a, b, c
		else if (strcmp(a, c) < 0)
			printf("%s %s %s\n", a, c, b);	// a, c, b
		else
			printf("%s %s %s\n", c, a, b);	// c, a, b
	}
	else {
		if (strcmp(a, c) < 0)
			printf("%s %s %s\n", b, a, c); // b, a, c
		else if (strcmp(b, c) < 0)
			printf("%s %s %s\n", b, c, a);// b, c, a
		else
			printf("%s %s %s\n", c, b, a);//c, b, a
	}
}
