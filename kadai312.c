// file: kadai312.c
// 最大公約数を求める
// 2015.7.13 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int func(int i, int j);

int main(void){
  int i;
  int j;
  int res;
  int tmp;

  printf("最大公約数を求めます。\n");
  printf("二つの正の整数を入力してください ＞");
  scanf("%d %d", &i, &j);

  if(i < j){ tmp = j; j = i; i = tmp; }
  res = func(i, j);

  if(res > 0){
    printf("%dと%dの最大公約数は%dです。\n", i, j, res);
  }
}

int func(int i, int j){
  int tmp;
  if(i < j){ tmp = i; i = j; j = tmp; }

  if(i % j == 0){
    return j;
  }

  return func(j, i % j);
}