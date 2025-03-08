#include "../includes/ft.h"

int main(int ac, char *argv[])
{
  if(check_error(ac, argv) == 0){
    doop(argv);
  }
  ft_putchar('\n');
  return 0;
}