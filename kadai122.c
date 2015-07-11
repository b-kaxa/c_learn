// file: kadai122.c
// 文字列を逆順に
// 2015.7.9 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>

void myReverse(char* x);
int pLen(char* s);

int main(void){
  char a[] = {"Waseda"};

  printf("before:a=%s\n", a);
  myReverse(a);
  printf(" after:a=%s\n", a);

  return 0;
}

void myReverse(char* x){
  unsigned int n;
  n = pLen(x);
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

int pLen(char* s){
  char* p = s;
  while(*p != '\0') { ++p; }
  return p - s;
}