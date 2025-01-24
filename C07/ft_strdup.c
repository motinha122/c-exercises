#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
  int i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}

char *ft_strdup(char *src){
  char *temp = (char *)malloc(sizeof(char *)*(strlen(src) + 1));
  if(temp == NULL)
    return NULL; //boa pratica meter proteção na safada do malloc

  return ft_strcpy(temp, src);
}

int main(void)
{
  char str1[10] = "batata";
  char *point = ft_strdup(str1);

  printf("%s \n", point);
  free(point);
  return 0;
}
