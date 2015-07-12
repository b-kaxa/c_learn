#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "SLib.h"

int getLine(char a[], int sz){
  int c;
  int z = 0;
  while(1) {
    if (z == sz -1){ break; }
    c = getchar();
    if(c == '\n'){ break; }
    if(c == EOF){ return EOF; }
    a[z++] = c;
  }
  a[z] = '\0';
  return z;
}

void linesFree(char *a[], int n){
  int i;
  for (i = 0; i < n; ++i){ free(a[i]); }
}

int linesRead(char *a[], int max){
  char line[100];
  int z;
  char *p;
  for (z = 0; z < max; ++z)
  {
    printf(">");
    if(getLine(line, sizeof(line)) == EOF){ break; }
    p = (char*)malloc(strlen(line) + 1);
    strcpy(p, line);
    a[z] = p;
  }
  return z;
}

void linesSort(char *a[], int n){
  int i;
  int nSwap;
  char *p;
  do{
    nSwap = 0;
    for (i = 0; i+1 != n; ++i)
    {
      if(strcmp(a[i], a[i+1]) > 0){
        ++nSwap;
        p = a[i]; a[i] = a[i+1]; a[i+1] = p;
      }
    }
  }while(nSwap != 0);
}

void linesWrite(char *a[], int n){
  int i;
  for (i = 0; i < n; ++i)
  {
    printf("%s\n", a[i]);
  }
}
FILE* fopenText(char* fName, char* mode){
  FILE* z;
  if(strcmp(mode, "r") == 0){
    z = fopen(fName, mode);
    if(z == NULL){fprintf(stderr, "can't open for [r]\n");}
    return z;
  } else if(strcmp(mode, "w") == 0){
    z = fopen(fName, "r");
    if(z != NULL){
      fclose(z);
      fprintf(stderr, "file exists for [w]\n");
    }
    z = fopen(fName, mode);
    if(z == NULL){fprintf(stderr, "can't open for [w]\n");}
    return z;
  } else {
    fprintf(stderr, "unknown mode.\n");
    return NULL;
  }
}
