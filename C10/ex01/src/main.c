#include "../includes/ft.h"

int main(int ac, char *argv[])
{

  if(ac == 1){
    print_error(ZERO_ARGS);
    return EX_NOINPUT;
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