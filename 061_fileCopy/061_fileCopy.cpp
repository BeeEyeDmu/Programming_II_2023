
// input.txt 파일을 outout.txt 파일에 복사하고
// 화면에도 그대로 출력하는 프로그램을 작성하시오
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE* in;
  FILE* out;

  if ((in = fopen("input.txt", "r")) == NULL) {
    printf("input.txt file not found!");
    exit(0);
  }
  if ((out = fopen("output.txt", "a")) == NULL) {
    printf("output.txt file can not create!");
    exit(0);
  }

  char c;
  while ((c = fgetc(in)) != EOF) {
    putchar(c);
    fputc(c, out);
  }

  fseek(in, 0, SEEK_SET);

  char line[80];
  while (fgets(line, 80, in) != NULL) {
    puts(line);
    fputs(line, out);
  }
  
  //while ((c = getchar()) != EOF)
  //  putchar(c);

  fclose(in);
  fclose(out);
}
