#include "../includes/ft.h"

int main(int ac, char *argv[])
{
  // char *myStr = "Xampson";
  int myArr[] = {1, 2, 3, 4, 5, 6};
  int myArr2[] = {1123, 2314, 3425, 4564, 4567, 6708};
  size_t arrSize = sizeof(myArr) / sizeof(myArr[0]);

  int arr2[] = ft_map(myArr, arrSize, ft_putnbr);

  return 0;
}