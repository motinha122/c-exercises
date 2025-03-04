#include "../includes/ft.h"

int main(int ac, char *argv[])
{
  char *tab[] = {"hello", "999Ab", "XAMPSON", "6575", "batata", "heineken"};
  // char *tab2[] = {"hellO", "999Ab", "XAMPSON", "6575", "batatA", "heIneken"};
  int count = ft_count_if(tab, 6, &ft_islower);
  ft_putnbr(count);
  return 0;
}