#include "../includes/ft_list.h"

t_list *ft_create_elem(void *data){
  t_list *elem = (t_list *)malloc(1 * sizeof(t_list));
  if(elem == NULL)
  {
    return NULL;
  }
  elem->data = (void *)data;
  elem->next = NULL;
  return elem;
}

void ft_list_push_front(t_list **begin_list, void *data){
  t_list *elem = ft_create_elem(data);
  elem->next = *begin_list; 
  *begin_list = elem;
}

int ft_list_size(t_list *begin_list){
  int count = 0;
  t_list *curr = begin_list;
  while (curr != NULL)
  {
    curr = curr->next;
    count++;
  }
  return count;
}

t_list *ft_list_last(t_list *begin_list){
  t_list *curr = begin_list;
  while(curr->next != NULL)
  {
    curr = curr->next;
  }
  return curr;
}