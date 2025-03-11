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
