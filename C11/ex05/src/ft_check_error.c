#include "../includes/ft.h"

int check_error(int ac, char *argv[]){
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
  return 0;
}