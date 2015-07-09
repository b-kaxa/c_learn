// file: kadai072.c
// 2015.6.2 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

void line(int c, int n);

int main(void){
  int mark = '*';
  int n;
  int i;
  int space_num;

  printf("高さ>");
  scanf("%d", &n);

  space_num = n;

  for (i = 0; i < n; ++i)
  {
    line(' ', space_num - i); line(mark, i); line(mark, 1); line(mark, i); line(' ', space_num - i); putchar('\n');
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