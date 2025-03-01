#include "../includes/ft.h"

int *ft_map(int *tab, int length, void (*f)(int)){
  int *temp_array = (int *)malloc(sizeof(int *) * length);

  size_t i = 0;
  if (tab && temp_array)//certifica que não são ponteiros nulos
  {
    while (i < length)
    {
      (*f)(tab[i]);
      i++;
    }
  }
}