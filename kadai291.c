// file: kadai291.c
// ビットフィールド
// 2015.7.12 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int main(void){
  enum alpha { A, B=1, C=10, D=110, E=111, F=-1};

  printf("A = %d\n", A);
  printf("B = %d\n", B);
  printf("C = %d\n", C);
  printf("D = %d\n", D);
  printf("E = %d\n", E);
  printf("F = %d\n", F);

  return 0;
}