// file: kadai101.c
// 正の整数値を逆順にする
// 2015.7.6 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <string.h>

int main(void){
  char str[100];
  int len;

  printf("正の整数値を入力してください：");
  scanf("%s", str);

  len = strlen(str);

  for (int i = len; i >= 0; --i)
  {
    printf("%c", str[i]);
  }
  printf("\n");

  return 0;
}