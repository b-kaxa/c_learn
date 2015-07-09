// file: kadai091.c
// 文字列の連結
// 2015.7.6 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <string.h>

int main(void){
  char a[20] = "waseda";
  char b[] = "university";

  printf("文字列 a= %s\n", a);
  printf("文字列 b= %s\n", b);

  strcat(a, b);
  printf("連結後文字列 a= %s\n", a);

  return 0;
}