#include "../includes/ft.h"

void doop(char *argv[])
{
  int a = ft_atoi(argv[1]);
  int b = ft_atoi(argv[3]);
  int res = 0;

  int (*operators[])(int, int) = {ft_sum, ft_minus, ft_mult, ft_div, ft_mod};
  char *arr[] = {"+", "-", "*", "/", "%"};

  int i = 0;
  while (i < 5)
  {
    if(ft_strcmp(argv[2], arr[i]) == 0){
      res = operators[i](a, b);
    }
    i++;
  }
  ft_putnbr(res);
}
