// file: kadai261.c
// 2015.5.25 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TagTeacher{
  char c;
  char name[20];
  char gakka[20];
  char kamoku[100];
} Teacher;

typedef struct TagStdnt{
  char c;
  char name[20];
  char bu[20];

  // added
  char gakka[20];
  char year[20];

} Stdnt;

typedef union{
  char c;
  Teacher t;
  Stdnt s;
} Member;

Teacher newTeacher(char* n, char* g, char* k);
Stdnt newStdnt(char* n, char* b, char* g, char* y);
char* mString(Member m);

int main(void){
  Member m[100];
  int nM;
  char* t;
  int i;

  m[0].t = newTeacher("小田井圭", "情報学科", "情報数学, データベース論");
  m[1].t = newTeacher("小野梓", "情報学科", "プログラミング初級");
  m[2].s = newStdnt("高田馬場雄", "教育学部", "国語科", "5年");
  m[3].s = newStdnt("大久保利通", "商学部", "商学科", "4年");
  m[4].s = newStdnt("目白秋子", "法学部", "法学科", "5年");
  m[5].s = newStdnt("代々木一男", "第一文学部", "文学科", "2年");
  m[6].s = newStdnt("秋葉原春子", "政治経済学部", "経済学科", "1年");
  nM = 7;

  for (int i = 0; i < nM; ++i)
  {
    t = mString(m[i]);
    printf("%s\n", t);
    free(t);
  }

  return 0;
}

Teacher newTeacher(char* n, char* g, char* k){
  Teacher z;
  z.c = 'T';
  strcpy(z.name, n);
  strcpy(z.gakka, g);
  strcpy(z.kamoku, k);
  return z;
}

Stdnt newStdnt(char* n, char* b, char* g, char* y){
  Stdnt z;
  z.c = 'S';

  strcpy(z.name, n);
  strcpy(z.bu, b);
  strcpy(z.gakka, g);
  strcpy(z.year, y);
  return z;
}

char* mString(Member m){
  char* z;
  z = (char*)malloc(300);
  if(z == NULL){ printf("malloc error!"); exit(1);}
  if(m.c == 'T'){
    sprintf(z, "教員[%s,%s,%s]", m.t.name, m.t.gakka, m.t.kamoku);
  } else if(m.c == 'S'){
    sprintf(z, "学生[%s,%s,%s,%s]", m.s.name, m.s.bu, m.s.gakka, m.s.year);
  } else {
    sprintf(z, "ありえなデータ");
  }
  return z;
}