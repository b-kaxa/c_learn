// file: kadai092.c
// 文字列の連結
// 2015.7.6 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <stdlib.h>

int main(void){
  char a[] = "123";
  char b[] = "456";

  printf("文字列 a= %s\n", a);
  printf("文字列 b= %s\n", b);

  printf("%s + %s = %d\n", a, b, atoi(a) + atoi(b));

  return 0;
}