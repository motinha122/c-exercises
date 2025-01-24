#include <stdio.h>

int friboinate_it(int ant, int i, int res);

int fibonacci(int i)
{
  return friboinate_it(0, i, 1);
}

int friboinate_it(int ant, int i, int res){
  if(i == 0){
    return 0;
  }
  if(i == 1){
    return res;
  }
  return friboinate_it(res, i - 1, res + ant);
}

int ft_is_prime(int n){
  
}

int main(void)
{
  printf("%d \n", fibonacci(0));
  printf("%d \n", fibonacci(1));
  printf("%d \n", fibonacci(2));
  printf("%d \n", fibonacci(3));
  printf("%d \n", fibonacci(18));
  // printf("%d", friboinate2(10));
  return 0;
}
