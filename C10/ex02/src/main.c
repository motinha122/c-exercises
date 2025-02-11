#include "../includes/ft.h"

int main(int ac, char *argv[])
{
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

  int i = 1;

  while (i < ac)
  {
    print_buffer(argv[i]);
    write(1, "\n", 1);
    i++;
  }

  return 0;
}