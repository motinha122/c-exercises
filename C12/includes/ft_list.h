#ifndef FT_LIST_H
#define FT_LIST_H

#include "utils.h"

typedef struct s_list
{
  void *data;
  struct s_list *next;
} t_list;

typedef struct s_vector
{
  int x;
  int y;
} t_vector;

void ft_hello();

t_vector *ft_create_vector(int x_value, int y_value);

t_list *ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);

#endif