#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_str_is_alpha(char *string)
{
  int i = 0;

  while (string[i] != '\0')
  {
    if ((string[i] < 'A' || string[i] > 'Z') && (string[i] < 'a' || string[i] > 'z'))
    {
      return 0;
    }
    i++;
  }
  return 1;
}

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

int ft_str_is_lower(char *string)
{
  int i = 0;

  while (string[i] != '\0')
  {
    if ((string[i] < 'a' || string[i] > 'z'))
    {
      return 0;
    }
    i++;
  }
  return 1;
}

int ft_str_is_upper(char *string)
{
  int i = 0;

  while (string[i] != '\0')
  {
    if ((string[i] < 'A' || string[i] > 'Z'))
    {
      return 0;
    }
    i++;
  }
  return 1;
}

int ft_str_is_upper_cpy(char *string)
{
  while (*string != '\0')
  {
    if ((*string < 'A' || *string > 'Z'))
    {
      return 0;
    }
    string++;
  }
  return 1;
}

int ft_str_is_print(char *string)
{
  int i = 0;

  while (string[i] != '\0')
  {
    if (string[i] >= 0 && string[i] <= 31)
    {
      return 0;
    }
    i++;
  }
  return 1;
}

char *ft_strupcase(char *string)
{
  int i = 0;

  while (string[i] != '\0')
  {
    if (string[i] >= 'a' && string[i] <= 'z')
    {
      string[i] = string[i] - 32;
    }
    i++;
  }
  return string;
}

char *ft_strlowcase(char *string)
{
  int i = 0;

  while (string[i] != '\0')
  {
    if (string[i] >= 'A' && string[i] <= 'Z')
    {
      string[i] = string[i] + 32;
    }
    i++;
  }
  return string;
}

int main()
{
  char *teste1 = "sadafa1";
  char *teste2 = "123456787890a";

  printf("ft_str_is_alpha %d \n", ft_str_is_alpha(teste1));
  printf("ft_str_is_alpha %d \n", ft_str_is_alpha(teste2));

  printf("ft_str_is_numeric %d \n", ft_str_is_numeric(teste1));
  printf("ft_str_is_numeric %d \n", ft_str_is_numeric(teste2));

  printf("ft_str_is_lower %d \n", ft_str_is_lower("lower"));
  printf("ft_str_is_lower %d \n", ft_str_is_lower("BATATA"));

  printf("ft_str_is_upper %d \n", ft_str_is_upper("lower"));
  printf("ft_str_is_upper %d \n", ft_str_is_upper("BATATA"));

  printf("ft_str_is_print %d \n", ft_str_is_print("\n"));
  printf("ft_str_is_print %d \n", ft_str_is_print("/n"));

  char str[] = "abcdefghjAAAAAAA";
  char str2[] = "AAAAAFFFFFsafada";

  printf("%s\n", ft_strupcase(str));
  printf("%s\n", ft_strupcase(str2));

  printf("%s\n", ft_strlowcase(str));
  printf("%s\n", ft_strlowcase(str2));
  return 0;
}