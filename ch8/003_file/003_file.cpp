// 003_file.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  FILE* in;
  FILE* out;
  
  if ((in = fopen("input.txt", "r")) == NULL) {
    printf("input.txt not found!");
    return 1;
  }
  out = fopen("output.txt", "a");

  int n, m;
  fscanf_s(in, "%d %d", &n, &m);
  //printf("%d\n", n);
  fprintf(out,"%d %d\n", n, m);

  fclose(in);
  fclose(out);
}
