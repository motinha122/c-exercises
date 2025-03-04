#include "../includes/ft.h"

int main(int ac, char *argv[])
{
  int arr[] = {1, 2, 3, 3, 4, 6, 6};
  int arr2[] = {2, 3, 5, 4, 6, 6};

  ft_putnbr(ft_is_sort(arr, 7, &ft_isbigger));
  return 0;
}