#include "../includes/ft.h"

void ft_foreach(int *tab, int length, void (*f)(int)){
  size_t i = 0;
  if (tab)
  {
    while (i < length)
    {
      (*f)(tab[i]);
      i++;
    }
  }
}