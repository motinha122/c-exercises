#include "../includes/ft_list.h"

int main(int ac, char *argv[])
{
  int data = 5;
  t_list *elem = ft_create_elem(data);
  ft_putstr("Elem data: ");
  ft_putnbr(elem->data);
  ft_putstr("\n");
  free(elem);
  return 0;
}