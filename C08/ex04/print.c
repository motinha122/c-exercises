#include "ft_stock.h"

void print_t_stock_str(t_stock_str *str)
{
  printf("%s \n", str->str);
  printf("%d \n", str->size);
  printf("%s \n", str->copy);
}
