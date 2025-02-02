#ifndef FT_STOCK_H
#define FT_STOCK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 - include
// 2 - define
// 3 - struct 
// 4 - prototype

typedef struct s_stock_str
{
  int size;
  char *str;
  char *copy;
} t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

t_stock_str *str_to_stock(const char *str);

void print_t_stock_str(t_stock_str *str);

void free_t_stock_str(t_stock_str *str);

#endif