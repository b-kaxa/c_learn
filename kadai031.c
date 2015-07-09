// file: kadai031.c
// 整数値に対応したテレビ局名を表示する
// 2015.4.24 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int main(void){
  int no;

  printf("局番は＞");;
  scanf("%d", &no);

  if(no == 1){
    puts("「NHK総合」です。");
  } else if (no == 2){
    puts("「NHK Eテレ」です。");
  } else if (no == 3){
    puts("「テレ玉」です。");
  } else if (no == 4){
    puts("「日本テレビ」です。");
  } else if (no == 5){
    puts("「テレビ朝日」です。");
  } else if (no == 6){
    puts("「TBS」です。");
  } else if (no == 7){
    puts("「テレビ東京」です。");
  } else if (no == 8){
    puts("「フジテレビジョン」です。");
  } else if (no == 9){
    puts("「TOKYO MX」です。");
  } else {
    puts("存在しないチャンネルです。");
  }

  return 0;
}