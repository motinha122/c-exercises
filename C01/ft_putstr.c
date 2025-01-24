#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
  write(1, &c, 1);
}

void ft_putstr(char *str){
  char *p = str;

  while (*p != '\0')
  {
    ft_putchar(*p);
    p++;
  }
}

int main(){
  char string[] = "Safada";
  ft_putstr(string);
  return 0;
}
