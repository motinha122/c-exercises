#include "../includes/ft.h"~

int ft_atoi(char *str)
{
  int res = 0;
  int i = 0;
  int neg = 1;
  while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
  {
    if (str[i] == '-')
    {
      neg *= -1;
    }
    i++;
  }

  while (str[i] >= '0' && str[i] <= '9')
  {
    res *= 10;
    res += str[i] - 48;
    // printf("%c \n", str[i]);
    i++;
  }

  return res * neg;
}
