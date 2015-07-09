// file: kadai213.c
// 任意の文字列から特定の文字の位置を表示
// 2015.4.18 author: 1J12F147-4　Kazuki Bandai

// 本当は標準入力から検索するようにしたかったのですが、出来ませんでした。

#include <stdio.h>
#include <string.h>

int main(void){
  char *str1 = "waseda university";
  char *str2 = "d";
  char *res;

  // puts("一つの文字を入力してください");
  // puts("「waseda university」から検索します");
  // printf("文字str2:"); scanf("%c", str2);

  res = strstr(str1, str2);

  printf("%sを%ld番目に見つけました\n", str2, res - str1 + 1);

  return 0;
}