#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strcapitalize(char *str)
{
  int i = 0;

  while (str[i] != '\0')
  {
    if ((str[i - 1] < '0' || str[i - 1] > '9') && (str[i - 1] < 'A' || str[i - 1] > 'Z') && (str[i - 1] < 'a' || str[i - 1] > 'z'))
    {
      if (str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] = str[i] - 32;
      }
    }
    i++;
  }
  return str;
}

int main()
{
  char str[] = "a string xampola 42batata au au + carro-lep";
  char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  printf("%s\n", ft_strcapitalize(str));
  printf("%s\n", ft_strcapitalize(str2));
  return 0;
}