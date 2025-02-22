#include "../includes/ft.h"

int main(int ac, char *argv[])
{
  int i = 1;

  // int c_flag = ft_strcmp(argv[1], "-c");

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

  if (ac == 3 && ft_strcmp(argv[1], "-c") == 0)
  {
    print_error(ZERO_ARGS);
    return EX_NOINPUT;
  }

  if (ac == 4 && ft_atoi(argv[2]) <= 0)
  {
    print_error(ZERO_ARGS);
    return EX_NOINPUT;
  }

  if (ft_strcmp(argv[1], "-c") == 0)
  {
    i = 3;
  }

  while (i < ac)
  {
    if (ft_strcmp(argv[1], "-c") == 0)
    {
      print_buffer_n_bytes(argv[i], argv[2]);
    }
    else{
      print_buffer(argv[i]);
    }
    write(1, "\n", 1);
    i++;
  }

  return 0;
}