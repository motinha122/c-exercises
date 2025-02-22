#include "../includes/ft.h"

int ft_str_is_numeric(char *string)
{
  int i = 0;

  while (string[i] != '\0')
  {
    if ((string[i] < '0' || string[i] > '9'))
    {
      return 0;
    }
    i++;
  }
  return 1;
}

int ft_is_negative(char *str)
{
  int i = 0;
  int res = 0;
  while (str[i] < '0' || str[i] > '9')
  {
    if (str[i] == '-')
    {
      res++;
    }
    i++;
  }

  return res % 2 != 0;
  // 0 = positivo, 1 = negativo
}

int ft_atoi(char *str)
{
  int res = 0;
  int i = 0;
  int neg = ft_is_negative(str);

  while (str[i] < '0' || str[i] > '9')
  {
    i++;
  }

  while (str[i] >= '0' && str[i] <= '9')
  {
    res *= 10;
    res += str[i] - 48;
    // printf("%c \n", str[i]);
    i++;
  }

  if (neg == 1)
  {
    res *= -1;
  }

  return res;
}
