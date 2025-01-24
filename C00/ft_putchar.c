#include <unistd.h>

void ft_putchar(char c){
  write(1, &c, 1);
}

int main(){
  char caractere = 122;
  ft_putchar(caractere);
  return 0;
}
