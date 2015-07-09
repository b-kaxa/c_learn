// file: kadai042.c
// 九九算表を表示する
// 2015.5.2 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int main(void){

  for (int j = 1; j < 10; ++j) {
    for (int i = 1; i < 10; ++i) {
      if(i * j < 10){
        printf(" ");
      }
      printf("%d ", i * j);
    }
    putchar('\n');
  }

  putchar('\n');

  return 0;

}