#include "../includes/ft.h"

void print_buffer_n_bytes(char *filename, char *n_bytes)
{
  printf("== %s ==\n", filename);
  char buffer[1];

  int fd = open(filename, O_RDONLY);

  ssize_t read_byte = read(fd, buffer, 1);

  int bytes_num = ft_atoi(n_bytes);
  // printf("bytes_num = %d\n", bytes_num);
  int char_count = 1;

  if (fd < 0)
  {
    print_error(CANT_READ);
  }

  // first read (char count)
  while ((read_byte = read(fd, buffer, 1)) > 0)
  {
    char_count++;
    bzero(buffer, 1);
  }
  close(fd);
  // printf("char count = %d\n", char_count);

  int char_iterator = char_count - bytes_num + 2;

  int fd2 = open(filename, O_RDONLY);

  // second read (last bytes iterator)
  while ((read_byte = read(fd2, buffer, 1)) > 0)
  {
    if (char_iterator > 1)
    {
      char_iterator--;
    }

    if (char_iterator == 1 || char_count <= bytes_num)
    {
      write(1, buffer, 1);
      bzero(buffer, 1);
    }
  }

  close(fd2);
}
