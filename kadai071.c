// file: kadai071.c
// 2015.6.1 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

void line(int c, int n);

int main(void){
  int mark = '*';
  int n;
  int i;

  printf("高さ>");
  scanf("%d", &n);
  for (i = 1; i <= n; ++i)
  {
    line(mark, i); line(' ', n - i); putchar('\n');
  }
  return 0;
}

void line(int c, int n){
  int i;
  for (i = 0; i < n; ++i)
  {
    putchar(c);
  }
}