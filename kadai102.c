// file: kadai102.c
// 2015.7.6 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int a, b;
  int c;
  int res;

  puts("二つの整数を入力してください。\n");
  puts("小さい方の値から大きい方の値までの間の整数を\n全て足し合わせた結果を表示します\n");
  printf("整数１：");  scanf("%d", &a);
  printf("整数２：");  scanf("%d", &b);

  c = abs(a - b);

  if(a < b) {
    for (int i = a; i <= a + c; ++i)
    {
      res += i;
    }
    printf("%d\n",res);

  } else if(a > b) {
    for (int i = b; i <= b + c; ++i)
    {
      res += i;
    }
    printf("%d\n",res);
  } else {
    printf("計算出来ません\n");
  }
  return 0;
}