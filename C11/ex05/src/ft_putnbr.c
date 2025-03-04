#include "../includes/ft.h"

void ft_putnbr(int n){
  int divisor = 1;
  int resto = n;
  int resultado = 0;

  if(n == 0){
    ft_putchar(48);
  }

  if(n < 0){
    resto = n * (-1);
    ft_putchar('-');
  }

  while (divisor <= resto)
  {
    divisor = divisor * 10;
  }
  divisor = divisor / 10;

  while (divisor >= 1)
  {
    resultado = resto / divisor;
    resto = resto % divisor;
    ft_putchar(resultado + 48);
    divisor = divisor / 10;
  }
  ft_putchar('\n');
}