#include "../includes/ft.h"

void print_buffer(char *filename){

  char buffer[BUFFER_SIZE];

  ssize_t read_byte;

  int fd = open(filename, O_RDONLY);

  if (fd < 0)
  {
    print_error(CANT_READ);
  }

  while ((read_byte = read(fd, buffer, BUFFER_SIZE)) > 0)
  {
    write(1, &buffer, BUFFER_SIZE);
    bzero(buffer, BUFFER_SIZE);
  }

  close(fd);
}
