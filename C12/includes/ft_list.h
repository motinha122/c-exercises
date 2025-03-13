#ifndef FT_LIST_H
#define FT_LIST_H

#include "utils.h"

typedef struct s_list
{
  struct s_list *next;
  void *data;
} t_list;

void ft_hello();

t_list *ft_create_elem(void *data);


#endif