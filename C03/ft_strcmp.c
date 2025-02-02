#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
  int i = 0;

  while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
  {
    i++;
  }

  unsigned char char1 = s1[i];
  unsigned char char2 = s2[i];

  printf("%d - %d \n", char1, char2);
  return char1 - char2;
}

int main(void)
{
  char str1[10] = "batataç";
  char str2[15] = "batata";

  printf("%d \n", strcmp(str1, str2));
  printf("%d \n", ft_strcmp(str1, str2));

  return 0;
}
