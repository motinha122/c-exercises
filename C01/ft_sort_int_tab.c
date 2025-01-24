#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int swap = *a;
  *a = *b;
  *b = swap;
}

void ft_sort_int_tab(int *tab, int size){
  int i = size;
  int j = 0;

  while (i > 0){
    while(j < size - 1){
      if(tab[j] > tab[j + 1]){
        ft_swap(&tab[j], &tab[j + 1]);
      }
      j++;
    }
    j = 0;
    i--;
  }

  int k = 0;
  while (k < size){
    printf("%d ", tab[k]);
    k++;
  }
}

int main()
{
  // int array[10] = {3, 1, 4, 7, 0, 2, 8, 9, 6, 5};
  int array[10] = {-3, 1, -4, 7, 0, -2, 8, -9, -6, 5};
  ft_sort_int_tab(array, 10);
  return 0;
}
