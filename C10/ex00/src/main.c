#include "../includes/ft.h"

int main(int ac, char *argv[])
{
  ssize_t read_byte;

  char buffer[BUFFER_SIZE];

  if(ac == 1){
    print_error(ZERO_ARGS);
    return EX_NOINPUT;
  }

  if (ac > 2)
  {
    print_error(MANY_ARGS);
    return EX_USAGE;
  }

  int fd = open(argv[1], O_RDONLY);

  if(fd < 0){
    print_error(CANT_READ);
    return EX_IOERR;
  }

  while ((read_byte = read(fd, buffer, BUFFER_SIZE)) > 0)
  {
    write(1, &buffer, BUFFER_SIZE);
    bzero(buffer, BUFFER_SIZE);
  }

  close(fd);

  write(1, "\n", 1);

  return 0;
}