#include "../includes/ft_libft.h"

void ft_swap(int *a, int *b)
{
  int swap = *a;
  *a = *b;
  *b = swap;
}
