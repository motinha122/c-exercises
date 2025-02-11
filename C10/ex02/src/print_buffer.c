#include "../includes/ft.h"

void print_buffer(char *filename){

  char buffer[BUFFER_SIZE];

  int fd = open(filename, O_RDONLY);
  
  ssize_t read_byte = read(fd, buffer, BUFFER_SIZE);

  int lines_count = 1;

  if (fd < 0)
  {
    print_error(CANT_READ);
  }

  while ((read_byte = read(fd, buffer, 1)) > 0)
  {
    if(buffer[0] == '\n'){
      lines_count++;
    }
    // write(1, buffer, 1);
    bzero(buffer, BUFFER_SIZE);
  }

  if(read_byte != 0){
    write(1, buffer, BUFFER_SIZE);
  }

  printf("lines count: %d \n", lines_count);
  
  close(fd);
}
