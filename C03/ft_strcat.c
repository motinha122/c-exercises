#include <stdio.h>
#include <string.h>

int ft_strcat(char *s1, char *s2)
{
  
}

int main(void)
{
  char str1[10] = "batataç";
  char str2[15] = "batata";

  printf("%d \n", strcmp(str1, str2));
  printf("%d \n", ft_strcmp(str1, str2));

  return 0;
}