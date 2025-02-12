#include "../includes/ft.h"

void print_buffer(char *filename){
  printf("== %s ==\n", filename);
  char buffer[BUFFER_SIZE];

  int fd = open(filename, O_RDONLY);
  
  ssize_t read_byte = read(fd, buffer, BUFFER_SIZE);

  int char_count = 0;

  int lines_count = 1;

  if (fd < 0)
  {
    print_error(CANT_READ);
  }
  
  // first read (lines and char count)
  while ((read_byte = read(fd, buffer, 1)) > 0)
  {
    if(buffer[0] == '\n'){
      lines_count++;
    }
    char_count++;
    // write(1, buffer, 1);
    bzero(buffer, BUFFER_SIZE);
  }
  close(fd);

  int line_iterator = lines_count - 9;

  int fd2 = open(filename, O_RDONLY);

  // second read (line iterator)
  while ((read_byte = read(fd2, buffer, 1)) > 0)
  {
    if (buffer[0] == '\n' && line_iterator > 1){
      line_iterator--;
    }

    if (line_iterator == 1 || lines_count <= 10)
    {
      write(1, buffer, 1);
      bzero(buffer, 1);
    }
  }

  // printf("char and lines count: %d , %d \n",char_count, lines_count);
  
  close(fd2);
}
