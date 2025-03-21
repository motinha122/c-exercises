#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(char *str){
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

int main(void)
{
  char *str1 = "toto3";

  printf("STR: %s \n", str1);
  printf("ft_atoi: %d \n", ft_atoi(str1));
  printf("atoi: %d \n", atoi(str1));

  return 0;
}
