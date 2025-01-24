#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){
  int div = *a / *b;
  int mod = *a % *b;
  *a = div;
  *b = mod;
}

int main(){
  int a = 25;
  int b = 12;

  ft_ultimate_div_mod(&a, &b);
  printf("%d %d", a, b);
  return 0;
}
