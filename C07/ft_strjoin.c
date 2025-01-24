#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy_index(char *dest, char *src, int i)
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

char *ft_strdup(char *src)
{
  char *temp = (char *)malloc(sizeof(char *) * (strlen(src) + 1));
  if (temp == NULL)
    return NULL; // boa pratica meter proteção na safada do malloc

  return ft_strcpy(temp, src);
}

size_t ft_full_size(int size, char **strs, char *sep)
{
  int i = 0;
  size_t arr_size = 0;
  size_t sep_size = strlen(sep) * (size - 1);

  while(i < size){
    arr_size += strlen(strs[i++]);
  }
  return arr_size + sep_size;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
  if (size == 0)
  {
    return NULL;
  }

  char *temp = (char *)malloc(sizeof(char *) * strlen(*strs));

  printf("size: %zu \n", ft_full_size(size, strs, sep));

  if (temp == NULL)
  {
    return NULL;
  }

  // int string_size = ft_full_size(size, strs, sep);

  int i = 0;
  int j = 0;
  int str_size = 0;
  while (i < size)
  {
    str_size = strlen(strs[i]);
    while (j < str_size)
    {

      j++;
    }
    i++;
  }

  return temp;
}

int main(void)
{
  int size = 5;
  char *strings[] = {
    "sapato",
    "pinto",
    "arroz",
    "jabuticaba",
    "vodka"
  };
  char *sep = "+";
  char *temp = ft_strjoin(size, strings, sep);
  char *res = "sapato+pinto+arroz+jabuticaba+vodka";
  printf("strlen: %zu \n", strlen(res));
  printf("strjoin: %s \n", temp);
  free(temp);
  return 0;
}
