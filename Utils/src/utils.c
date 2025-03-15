#include "../includes/utils.h"

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  char *p = str;

  while (*p != '\0')
  {
    ft_putchar(*p);
    p++;
  }
}

void ft_putnbr(int n)
{
  int divisor = 1;
  int resto = n;
  int resultado = 0;

  if (n == 0)
  {
    ft_putchar(48);
  }

  if (n < 0)
  {
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
}

int ft_strcmp(char *s1, char *s2)
{
  int i = 0;

  while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
  {
    i++;
  }

  unsigned char char1 = s1[i];
  unsigned char char2 = s2[i];

  return char1 - char2;
}

int ft_strlen(char *str)
{
  int i = 0;

  while (str[i] != '\0')
  {
    i++;
  }
  return i;
}

void ft_swap(int *a, int *b)
{
  int swap = *a;
  *a = *b;
  *b = swap;
}
