// file: kadai241.c
// 検索
// 2015.5.2 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
  char *z;
  int optX = 0;
  int optY = 0;

  if   (strstr(argv[1],argv[2])) { optX = 1; z = strstr(argv[1],argv[2]);}
  else                           { optY = 1;}

  if(optX){printf("文字列%s中に文字列%sは%ld番目に見つかりました。\n", argv[1], argv[2], z - argv[1] + 1);}
  if(optY){printf("文字列%s中に文字列%sは見つかりません\n", argv[1], argv[2]);}

  return 0;

}