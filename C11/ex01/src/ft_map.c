#include "../includes/ft.h"

int *ft_map(int *tab, int length, int (*f)(int)){
  int *temp_array = (int *)malloc(sizeof(int *) * length);

  size_t i = 0;
  if (tab && temp_array)//certifica que não são ponteiros nulos
  {
    while (i < length)
    {
      temp_array[i] = (*f)(tab[i]);
      i++;
    }
  }
  return temp_array;
}