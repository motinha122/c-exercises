#include "../includes/ft_list.h"

t_list *ft_create_elem(void *data)
{
  t_list *elem = (t_list *)malloc(1 * sizeof(t_list));
  if (elem == NULL)
  {
    return NULL;
  }
  elem->data = (void *)data;
  elem->next = NULL;
  return elem;
}

void ft_list_push_front(t_list **begin_list, void *data)
{
  t_list *elem = ft_create_elem(data);
  elem->next = *begin_list;
  *begin_list = elem;
}

int ft_list_size(t_list *begin_list)
{
  int count = 0;
  t_list *curr = begin_list;
  while (curr != NULL)
  {
    curr = curr->next;
    count++;
  }
  return count;
}

t_list *ft_list_last(t_list *begin_list)
{
  t_list *curr = begin_list;
  while (curr->next != NULL)
  {
    curr = curr->next;
  }
  return curr;
}

void ft_list_push_back(t_list **begin_list, void *data)
{
  t_list *elem = ft_create_elem(data);
  t_list *last = ft_list_last(*begin_list);
  last->next = elem;
}

t_list *ft_list_push_strs(int size, char **strs)
{
  t_list *temp = NULL;
  int i = 0;
  while (i < size)
  {
    ft_list_push_front(&temp, strdup(strs[i]));
    i++;
  }
  return temp;
}

void free_data(void *link_data)
{
  free(link_data);
  link_data = NULL;
}

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
  t_list *current = begin_list;
  t_list *next = NULL;

  while (current != NULL)
  {
    next = current->next;
    free_fct(current->data);
    free(current);
    current = next;
  }
}

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
  if (nbr >= ft_list_size(begin_list))
  {
    return NULL;
  }
  t_list *temp = begin_list;
  unsigned int i = 0;
  while (i != nbr)
  {
    temp = temp->next;
    i++;
  }
  return temp;
}

void print_list(t_list *begin_list)
{
  t_list *temp = begin_list;

  while (temp != NULL)
  {
    printf("%s\n", (char *)temp->data);
    temp = temp->next;
  }
}

void print_list_int(t_list *begin_list)
{
  t_list *temp = begin_list;

  while (temp != NULL)
  {
    printf("%d\n", *(int *)temp->data);
    temp = temp->next;
  }
}

// lista a -> b -> c -> d -> f -> g
// lista b <- b <- c <- d <- f <- g
void ft_list_reverse(t_list **begin_list)
{
  t_list *no_anterior = NULL;
  t_list *atual = *begin_list;
  t_list *proximo = NULL;

  while (atual != NULL)
  {
    proximo = atual->next;     // Guarda o proximo no
    atual->next = no_anterior; // Inverte o ponteiro
    no_anterior = atual;       // Atualiza o no anterior
    atual = proximo;           // Avança para o proximo no
  }

  *begin_list = no_anterior; // Atualiza o ponteiro para o novo inicio da lista
}

void ft_list_foreach(t_list *begin_list, void (*f)(void *)) {
  t_list *temp = begin_list;

  while (temp != NULL) {
    (*f)(temp->data);
    temp = temp->next;
  }
}

