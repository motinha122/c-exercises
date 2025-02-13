#include "../includes/ft.h"

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
