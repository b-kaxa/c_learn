// file: kadai212.c
// 読み込んだ一つの整数値に対応する三角形を生成
// 2015.4.18 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int main(void){
  int x;

  puts("一つの整数を入力してください。");
  printf("整数x:"); scanf("%d", &x);

  for (int i = 1; i <= x; ++i){
    for (int r = 1; r <= i; ++r){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}