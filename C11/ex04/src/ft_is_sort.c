#include "../includes/ft.h"

int ft_is_sort(int *tab, int length, int(*f)(int, int)){
  int i = 0;
  if (tab)
  {
    while(i < length - 1){
      if((*f)(tab[i], tab[i + 1]) == 1){
        return 0;
      }
      i++;
    }
  }
  return 1;
}