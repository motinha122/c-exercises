#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab,int size){
  int ileft = 0;
  int iright = size - 1;
  int swap = 0;

  while(ileft < iright){
    swap = tab[ileft];
    tab[ileft] = tab[iright];
    tab[iright] = swap;
    ileft++;
    iright--;
  }

  int i = 0;
  while (i < size){
    printf("%d ", tab[i]);
    i++;
  }
}

int main(){
  int array[6] = {10,20,30,40,50,60};
  ft_rev_int_tab(array, 6);
  return 0;
}
