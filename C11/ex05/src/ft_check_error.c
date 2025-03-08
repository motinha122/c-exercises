#include "../includes/ft.h"
static int check_operators(char *argv);
static int check_div_zero(char *op, char *b);

int check_error(int ac, char *argv[])
{
  if (ac < 4)
  {
    ft_putstr("Missing Arguments");
    return -1;
  }
  if (ac > 4)
  {
    ft_putstr("Too many Arguments");
    return -1;
  }
  if(check_operators(argv[2]) == -1)
  {
    ft_putstr("Invalid Operator");
    return -1;
  }

  if(check_div_zero(argv[2], argv[3]) == -1){
    ft_putstr("Division by zero");
    return -1;
  }
  
  if(check_div_zero(argv[2], argv[3]) == -2){
    ft_putstr("Modulo by zero");
    return -1;
  }

  return 0;
}

static int check_operators(char *argv){
  char *arr[] = {"+", "-", "*", "/", "%"};
  int i = 0;
  while (i < 5)
  {
    if(ft_strcmp(argv, arr[i]) == 0){
      return 0;
    }
    i++;
  }
  return -1;
}

static int check_div_zero(char *op, char *arg){
  char *div = "/";
  char *mod = "%";

  int b = ft_atoi(arg);

  if(EQUAL(op, div) && b == 0)
  {
    return -1;
  }
  if(EQUAL(op, mod) && b == 0){
    return -2;
  }
  return 0;
}