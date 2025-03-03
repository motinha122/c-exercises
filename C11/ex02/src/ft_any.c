#include "../includes/ft.h"

int ft_any(char **tab, int(*f)(char*)){
  int i = 0;
  if (tab)
  {
    while (tab[i] != 0)
    {
      if((*f)(tab[i]) == 1){
        return 1;
      }
      i++;
    }
  }
  return 0;
}