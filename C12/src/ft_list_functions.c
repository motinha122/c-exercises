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

void ft_list_push_back(t_list **begin_list, void *data){
  t_list *elem = ft_create_elem(data);
  t_list *last = ft_list_last(*begin_list);
  last->next = elem;
}

t_list *ft_list_push_strs(int size, char **strs){
  t_list *temp = NULL;
  int i = 0;
  while (i < size){
    ft_list_push_front(&temp, strdup(strs[i]));
    i++;
  }
  return temp;
}

void free_data(void *link_data){
  free(link_data);
  link_data = NULL;
}

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *)){
  t_list *current = begin_list;
  t_list *next = NULL;

  while(current != NULL){
    next = current->next;
    free_fct(current->data);
    free(current);
    current = next;
  }
}