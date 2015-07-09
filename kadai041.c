// file: kadai041.c
// 読み込んだ正の整数値までカウントダウン
// 2015.5.2 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int main(void){
  int i, no;

  printf("正の整数を入力してください：");
  scanf("%d", &no);

  i = no;
  while (i >= 0) {
    printf("%d ", i--);
  }
  putchar('\n');

  return 0;

}