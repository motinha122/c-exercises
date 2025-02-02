#include "ft_stock.h"

int main(int ac, char **av)
{
  char *str = "lep uwu";

  t_stock_str *str2 = str_to_stock(str);
  // print_t_stock_str(str2);
  free_t_stock_str(str2);

  t_stock_str *str3 = ft_strs_to_tab(ac, av);

  int i = 0;
  
  while(i != ac){
    print_t_stock_str(&str3[i]);
    i++;
  }

  // printf("stock_size:%ld \n", sizeof(t_stock_str));
  // printf("* stock_size:%ld \n", sizeof(t_stock_str *));
  return (0);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av){
  t_stock_str *temp = (t_stock_str *)malloc(ac * sizeof(t_stock_str));

  int i = 0;
  while(i != ac){
    temp[i] = *str_to_stock(av[i]);
    i++;
  }

  return temp;
}

t_stock_str *str_to_stock(const char *str){
    t_stock_str *stk = (t_stock_str *)malloc(1 * sizeof(t_stock_str));
    stk->size = strlen(str);
    stk->str = (char *)str;
    stk->copy = strdup(str);
    return stk;
}

void free_t_stock_str(t_stock_str *str){
  free(str->copy);
  free(str);
}