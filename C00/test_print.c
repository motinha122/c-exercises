#include <unistd.h>

/* UTILITY */

void ft_putchar(char c)
{
  write(1, &c, 1);
}

/* IMPLEMENTATION */

void ft_print_chars(void){
  int i = 0;
  int j;
  while (i < 10)
  {
    j = i + 1;
    while(j < 10){
      ft_putchar('*');
      j++;
    }
    ft_putchar('\n');
    i++;
  }
}

int main(){
  ft_print_chars();
  return 0;
}