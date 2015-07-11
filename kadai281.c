// file: kadai281.c
// 指定されたビット番号の中を調べる
// 2015.7.12 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <stdlib.h>

// 値xをr進文字列に変換
char* toString(unsigned short x, int r);
int testBit(unsigned int x, unsigned short m);

int main(void){
  unsigned int x = 0x12345678;
  unsigned short m = 28;
  int res;

  res = testBit(x, m);

  printf("xのビット番号%dのビットは%dです\n", m, res);

  return 0;
}

int testBit(unsigned int x, unsigned short m){
  char* z;

  x = x >> m;
  z = toString(x, 2);

  if(z[15] =='1'){
    return 1;
  } else {
    return 0;
  }
}

char* toString(unsigned short x, int r){
  int w;
  char* z;
  int i;

  if(r == 2) { w = 16; }
  else if(r == 4){ w = 8; }
  else if(r == 8){ w = 6; }
  else if(r == 16){ w = 4; }
  else { exit(1); }

  z = (char*)malloc(w + 1);
  z[w] = '\0';
  for (i = w - 1; i >= 0; --i)
  {
    z[i] = "0123456789abcdef"[x % r];
    x = x / r;
  }
  return z;
}