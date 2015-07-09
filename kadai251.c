// file: kadai251.c
// ファイル内容に行番号を付けて出力する
// 2015.5.25 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <string.h>
FILE* fopenText(char* fName, char* mode);

int main(void){
  char inFile[100];
  FILE *fp;
  int b = '\n';
  int c;
  int l = 1;

  printf("inFile>");
  scanf("%s", inFile);
  fp = fopen( inFile, "r" );

  while( (c = getc( fp )) != EOF ){
      if(c == EOF){ break; }
      if(b == '\n'){
        printf("%03d:", l );
        ++l;
      }
      b = putchar(c);
  }
  printf("\n");

  return 0;
}