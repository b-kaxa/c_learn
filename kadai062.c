// file: kadai062.c
// 整数値を読み込み、その符号を反転させる関数
// 2015.5.22 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int reverse(int x);

int main(void){
  int na, nb;

  puts("整数を入力してください。");
  printf("整数：");  scanf("%d", &na);

  printf("その値の符号を反転させた値は%dです。\n", reverse(na));

  return 0;
}

int reverse(int x){
  return x * (-1);
}