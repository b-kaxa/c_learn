// file: kadai221.c
// 身長を読み込み、標準体重を計算して表示
// 2015.4.18 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int main(void){
  int x;
  int res;

  puts("身長を入力してください。");
  printf("身長(cm):"); scanf("%d", &x);

  // BMIを22として体重を算出
  res = x * x * 22;

  // 10000で割るのはmをcmに直すため
  printf("身長が%dcmの人の標準体重は%dKgです\n", x, res / 10000);

  return 0;
}