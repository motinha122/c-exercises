#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a,int *b){
  int swap = *a;
  *a = *b;
  *b = swap;
}

int main(){
  int a = 12;
  int b = 25;
  ft_swap(&a, &b);
  printf("%d %d", a, b);
  return 0;
}

