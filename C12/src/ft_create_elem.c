#include "../includes/ft_list.h"

t_list *ft_create_elem(void *data){
  t_list *elem = (t_list *)malloc(1 * sizeof(t_list));
  if(elem == NULL){
    return NULL;
  }
  elem->data = (void *)data;
  elem->next = NULL;
  return elem;
}