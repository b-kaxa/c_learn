// file: kadai121.c
// 文字列を連結
// 2015.7.9 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

char* strmycat(char* s1, char* s2);
int pLen(char* s);

int main(void){
  char a[20] = "waseda";
  char b[]   = "university";
  char* c;

  printf("before:a=%s, b=%s\n", a, b);
  c = strmycat(a, b);
  printf(" after:c=%s\n", c);

  return 0;
}

char* strmycat(char* s1, char* s2){
  unsigned int n;
  char* p = s1;
  char* q = s2;

  n = pLen(p) + pLen(q);

  for (int i = 0; i < n; ++i)
  {
    if(p[i] == '\0'){
      p[i] = *q;
      q++;
    }
  }

  return p;
}

int pLen(char* s){
  char* p = s;
  while(*p != '\0') { ++p; }
  return p - s;
}