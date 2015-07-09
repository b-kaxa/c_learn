// file: kadai052.c
// 10000以下の2のべき乗数を順に表示
// 2015.5.15 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <math.h>

int main(void){
  int i;
  int tmp;
  int tensu[20]; // 5人の学生の点数

  for(i = 1; i < 20; i++){
    tmp = pow(2 , i);
    if(tmp <= 10000){
      tensu[i] = tmp;
    } else {
      break;
    }
  }

  for(i = 0; i < 20; i++){
    if(tensu[i] != 0) printf("%d\n", tensu[i]);
  }

  return 0;
}