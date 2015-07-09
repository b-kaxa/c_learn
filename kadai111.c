// file: kadai111.c
// 三つのint型変数を昇順に並び替える
// 2015.7.8 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

void sort3(int* x, int* y, int* z);

int main(void){
  int l = 89;
  int m = 1;
  int n = 13;

  printf("before: l=%2d, m=%2d, n=%2d\n", l, m, n);
  sort3(&l, &m, &n);
  printf(" after: l=%2d, m=%2d, n=%2d\n", l, m, n);

  return 0;
}

void sort3(int* x, int* y, int* z){
  int t1;
  int t2;

  if(*x < *y && *y < *z && *x < *z) {

  } else if(*x < *y && *y > *z && *x < *z) {

    t1 = *y; *y = *z; *z = t1;

  } else if(*x > *y && *y < *z && *x < *z) {

    t1 = *y; *y = *x; *x = t1;

  } else if(*x < *y && *y > *z && *x > *z) {

    t1 = *x; t2 = *y; *x = *z; *y = t1; *z = t2;

  } else if(*x > *y && *y < *z && *x > *z) {

    t1 = *y; t2 = *z; *z = *x; *x = t1; *y = t2;

  } else if(*x > *y && *y > *z && *x > *z) {

    t1 = *x; *x = *z; *z = t1;

  }
}