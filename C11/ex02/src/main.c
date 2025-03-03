#include "../includes/ft.h"

int main(int ac, char *argv[])
{
  char *tab[] = {"hellO", "999Ab", "XAMPSON", "6575", 0};
  int res = ft_any(tab, &ft_isupper);
  int res2 = ft_any(tab, &ft_islower);
  ft_putnbr(res);
  ft_putnbr(res2);
  return 0;
}