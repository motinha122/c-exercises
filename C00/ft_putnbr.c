#include <unistd.h>

/* UTILITY */

void ft_putchar(char c)
{
  write(1, &c, 1);
}

/* IMPLEMENTATION */

void aux_iterator(int n){
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

// void ft_putnbr(int n){

// }

int main()
{
  aux_iterator(123456);
  aux_iterator(0);
  aux_iterator(-687945);
  return 0;
}