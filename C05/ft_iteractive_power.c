#include <stdio.h>

int power_it(int n, int power, int res);

int powerial(int nb, int power)
{
  return power_it(nb, power, 1);
}

int power_it(int n, int power, int res)
{
  if (power == 0)
  {
    return res;
  }
  return power_it(n, power - 1, res * n);
}

int powerial2(int n, int power)
{
  int i = 1;
  int res = 1;
  while (i <= power)
  {
    res = res * n;
    i++;
  }
  return res;
}

int main(void)
{
  printf("%d \n", powerial(2, 30));
  printf("%d", powerial2(2, 10));
  return 0;
}
