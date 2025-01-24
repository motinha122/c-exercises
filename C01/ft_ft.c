#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr){
  *nbr = 42;
}

int main(){
  int a = 10;
  int *p = &a;
  ft_ft(p);
  printf("%d \n", a);
  printf("%d \n", *p);
  return 0;
}
