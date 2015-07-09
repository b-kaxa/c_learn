// file: kadai051.c
// 60点以上の学生の番号と点数を全て表示
// 2015.5.15 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

int main(void){
  int i;
  int tensu[5]; // 5人の学生の点数

  puts("点数を入力してください。");

  for(i = 0; i < 5; i++){
    printf("%2d番：", i + 1);
    scanf("%d", &tensu[i]);
  }

  printf("--- 60点以上の学生リスト ---\n");

  for(i = 0; i < 5; i++){
    if(60 <= tensu[i]){
      printf("%2d番：%i点\n", i + 1, tensu[i]);
    }
  }

  return 0;
}