#include "../includes/ft_list.h"

// int main(int ac, char *argv[])
// {
//   // int num = 5;
//   // int num1 = 30;
//   // int num2 = 20;
//   // int num3 = 10;

//   // t_list *head = NULL;

//   // t_list *head1 = NULL;
//   // t_list *elem = ft_create_elem(&num);

//   // ft_list_push_front(&head, &num1);
//   // ft_list_push_front(&head, &num2);
//   // ft_list_push_front(&head, &num3);

//   // ft_list_push_front(&head1, &num1);

//   // t_list * curr = head;

//   // while (curr != NULL)
//   // {
//   //   ft_putnbr(*(int *)curr->data);
//   //   ft_putstr("\n");
//   //   curr = curr->next;
//   // }

//   // ft_putnbr(ft_list_size(head));
//   // ft_putstr("\n");

//   // ft_list_push_back(&head, &num);

//   // ft_putnbr(ft_list_size(head));
//   // ft_putstr("\n");

//   // t_list *last_node = ft_list_last(head);
//   // ft_putnbr(*(int *)last_node->data);

//   char *strings[5] = {"lep","lepinho","lepson","rinalep","leprina"};

//   t_list *headstrs = ft_list_push_strs(5, strings);

//   t_list *curr2 = headstrs;

//   // t_list *teste = ft_list_at(headstrs, 5);

//   // ft_putstr((char *)teste->data);

//   // ft_putstr((char *)headstrs->data);
//   // ft_putstr("\n");

//   ft_putstr("Antes de reverter\n");
//   while (curr2 != NULL)
//   {
//     ft_putstr((char *)curr2->data);
//     ft_putstr("\n");
//     curr2 = curr2->next;
//   }
//   //ft_list_reverse(&headstrs);
//   ft_putstr("Depois de reverter\n");

//   curr2 = headstrs;

//   while (curr2 != NULL)
//   {
//     ft_putstr((char *)curr2->data);
//     ft_putstr("\n");
//     curr2 = curr2->next;
//   }

//   ft_list_clear(headstrs, &free_data);

//   // free(elem);
//   // free(head);
//   return 0;
// }

// int main()
// {
//   char    *strings[5] = {"lep", "lepinho", "lepson", "rinalep", "leprina"};
//   t_list  *headstrs = ft_list_push_strs(5, strings);

//   ft_putstr("Antes de reverter\n");
//   print_list(headstrs);

//   ft_list_reverse(&headstrs);

//   ft_putstr("Depois de reverter\n");
//   print_list(headstrs);
//   return 0;
// }

void  dobrar(void *nbr) {
  *(int *)nbr = *(int *)nbr * 2;
}

int main() {
  t_list *list = NULL;

  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;

  ft_list_push_front(&list, &a);
  ft_list_push_front(&list, &b);
  ft_list_push_front(&list, &c);
  ft_list_push_front(&list, &d);
  ft_list_foreach(list, dobrar);
  print_list_int(list);
  return 0;
}
