#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
  int i = 0;

  while (*str)
  {
    str++;
    i++;
  }
  return i;
}

char *ft_strcat(char *dest, char *src)
{
  int src_i = 0;
  int dest_i = ft_strlen(dest);
  char *ret = dest;

  while (*dest)
  {
    dest++;
  }

  while(src_i < ft_strlen(src)){
    dest[dest_i + src_i] = src[src_i];
    src_i++;
  }

  return ret;
}

int main(void)
{
  char str1[10] = "lep";
  char str2[15] = "japuka";

  printf("%s \n", strcat(str1, str2));
  printf("%s \n", ft_strcat(str1, str2));
  return 0;
}