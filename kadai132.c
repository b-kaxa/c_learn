// file: kadai132.c
// 中点
// 2015.7.11 author: 1J12F147-4　Kazuki Bandai

#include <stdio.h>
#include <math.h>
#define NUMBER 5

typedef struct TagPoint
{
  double x;
  double y;
} Point;

Point center(Point p1, Point p2);

int main(void){
  Point ans;

  Point pt[] = {
    {178, 61.0},
    {175, 60.5},
    {173, 80.0},
    {165, 72.0},
    {179, 77.5}
  };

  ans = center(pt[0], pt[1]);

  printf("中点はx=%f,y=%f\n", ans.x, ans.y);

  return 0;
}

Point center(Point p1, Point p2){
  Point res;

  res.x = fabs((p1.x - p2.x) / 2 );
  res.y = fabs((p1.y - p2.y) / 2 );

  return res;
}