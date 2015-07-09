// file: kadai082.c
// 小文字を大文字に変換
// 2015.6.18 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int main(void){
  int c;
  int toUppper(int c);

  while(1) {
    c = getchar();
    if(c == EOF){ break; }
    c = toUppper(c);
    putchar(c);
  }
  return 0;
}

int toUppper(int c){
  if(c >= 'a' && c <= 'z'){
    return (c - 32);
  }
  return c;
}