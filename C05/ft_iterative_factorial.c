#include <stdio.h>

int fact_it(int n, int i, int res);

int factorial(int nb)
{
  return fact_it(nb, 1, 1);
}

int fact_it(int n, int i, int res){
  if(i > n){
    return res;
  }
  return fact_it(n, i + 1, res * i);
}

int factorial2(int n){
  int i = 1;
  int res = 1;
  while (i <= n)
  {
    res = res * i;
    i++;
  }
  return res;
}

int main(void){
  printf("%d", factorial(5));
  printf("%d", factorial2(5));
  return 0;
}