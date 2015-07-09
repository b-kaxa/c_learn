// file: kadai231.c
// プログラム実行時の日付を表示する
// 2015.4.25 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <time.h>

int main(void){
  time_t timer;
  struct tm *t;
  char *wday[] = {"日","月","火","水","木","金","土"};

  time(&timer);
  t = localtime(&timer);

  printf("本日は%d年%d月%d日(%s)です。\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday, wday[t->tm_wday]);

  return 0;
}