// file: kadai112.c
// 配列の内容を逆順に並び替える
// 2015.7.9 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

void reverse(int* x, int n);

int main(void){
  int x[] = {1,2,3,4,5};
  int array_count = sizeof x/sizeof(int);

  printf("before:%2d,%2d,%2d,%2d,%2d\n", x[0], x[1], x[2], x[3], x[4]);
  reverse(x, array_count);
  printf(" after:%2d,%2d,%2d,%2d,%2d\n", x[0], x[1], x[2], x[3], x[4]);

  return 0;
}

void reverse(int* x, int n){
  int t[n];

  for (int i = 0; i < n; ++i)
  {
    t[i] = x[i];
  }

  for (int j = n - 1, count = 0; j >= 0; --j)
  {
    x[count] = t[j];
    count++;
  }

}