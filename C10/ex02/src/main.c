#include "../includes/ft.h"

int main(int ac, char *argv[])
{
  int i = 1;

  if (ac == 1)
  {
    print_error(ZERO_ARGS);
    return EX_NOINPUT;
  }

  if (ac == 2)
  {
    print_buffer(argv[2]);
    return EX_OK;
  }

  if (ac == 3 && ft_strcmp(argv[1], "-c") == 0){
    print_error(ZERO_ARGS);
    return EX_NOINPUT;
  }

  if (ac == 4 && argv[2] <= 0)
  {
    print_error(ZERO_ARGS);
    return EX_NOINPUT;
  }

  if (ft_strcmp(argv[1], "-c") == 0){
    i = 3;
  }

  while (i < ac)
  {

    print_buffer(argv[i]);
    write(1, "\n", 1);
    i++;
  }

  return 0;
}