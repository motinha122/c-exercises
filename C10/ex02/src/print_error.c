#include "../includes/ft.h"

void print_error(char *str){
  write(STDERR_FILENO, str, strlen(str));
  write(STDERR_FILENO, "\n", 1);
}