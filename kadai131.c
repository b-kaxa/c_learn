// file: kadai131.c
// 長方形の面積
// 2015.7.11 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <math.h>
#define NUMBER 5

typedef struct TagPoint
{
  double x;
  double y;
} Point;

double area(Point p1, Point p2);

int main(void){
  double ans;

  Point pt[] = {
    {178, 61.0},
    {175, 60.5},
    {173, 80.0},
    {165, 72.0},
    {179, 77.5}
  };

  ans = area(pt[0], pt[1]);

  printf("%f\n", ans);

  return 0;
}

double area(Point p1, Point p2){
  double res;

  res = fabs((p1.x - p2.x) * (p1.y - p2.y));

  return res;
}