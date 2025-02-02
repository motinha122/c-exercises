#include "ft_point.h"

void set_point(t_point *point)
{
  point->x = 42;
  point->y = 21;
}

void print_point(t_point *point){
  printf("x: %d \n", point->x);
  printf("y: %d \n", point->y);
}

void set_point_s(struct estrutura *point)
{
  point->x = 42;
  point->y = 21;
}

void print_point_s(struct estrutura *point)
{
  printf("x: %d \n", point->x);
  printf("y: %d \n", point->y);
}

int main(void)
{
  t_point point;

  struct estrutura point_2;

  point.x = 0;
  point.y = 0;

  point_2.x = 0;
  point_2.y = 0;
  print_point(&point);
  set_point(&point);
  print_point(&point);

  print_point_s(&point_2);
  set_point_s(&point_2);
  print_point_s(&point_2);
  return (0);
}