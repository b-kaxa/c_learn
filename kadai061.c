// file: kadai061.c
// 二つの整数の小さい方の値を返す関数
// 2015.5.22 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int min2(int x, int y);

int main(void){
  int na, nb;

  puts("二つの整数を入力してください。");
  printf("整数１：");  scanf("%d", &na);
  printf("整数２：");  scanf("%d", &nb);

  printf("小さい方の値は%dです。\n", min2(na, nb));

  return 0;
}

int min2(int x, int y){
  if(x < y){ return x; }
  else { return y; }
}