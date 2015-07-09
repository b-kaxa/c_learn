// file: kadai081.c
// 入力された文字数を数える
// 2015.6.18 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int main(void){
  int c;
  int count = 0;

  while(1) {
    c = getchar();
    if(c == EOF){
      printf("文字数は%dです。\n", count);
      break;
    }
    count++;
  }
  return 0;
}