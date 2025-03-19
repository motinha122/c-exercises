#include "../includes/ft_list.h"

int main(int ac, char *argv[])
{
  int num = 5;
  int num1 = 30;
  int num2 = 20;
  int num3 = 10;

  t_list *head = NULL;
  t_list *head1 = NULL;
  t_list *elem = ft_create_elem(&num);

  ft_list_push_front(&head, &num1);
  ft_list_push_front(&head, &num2);
  ft_list_push_front(&head, &num3);

  ft_list_push_front(&head1, &num1);
  
  t_list * curr = head;

  while (curr != NULL)
  {
    ft_putnbr(*(int *)curr->data);
    ft_putstr("\n");
    curr = curr->next;
  }

  ft_putnbr(ft_list_size(head));
  ft_putstr("\n");
  ft_putnbr(ft_list_size(head1));
  ft_putstr("\n");

  t_list *last_node = ft_list_last(head);
  ft_putnbr(*(int *)last_node->data);

  free(elem);
  free(head);
  return 0;
}