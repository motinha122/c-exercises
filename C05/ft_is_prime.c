#include <stdio.h>

int ft_prime(int n, int i){
  if (i == n){
    return 1;
  }
  if (n % i == 0)
  {
    return 0;
  }
  return ft_prime(n, i + 1);
}

int ft_is_prime(int n){
  return ft_prime(n, 2);
}

int main(void)
{
  printf("%d \n", ft_is_prime(100));
  printf("%d \n", ft_is_prime(3));
  printf("%d \n", ft_is_prime(31));
  printf("%d \n", ft_is_prime(2));
  printf("%d \n", ft_is_prime(5));
  printf("%d \n", ft_is_prime(4));
  return 0;
}
