#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str){
  int i = 0;

  while (str[i] != '\0'){
    i++;
  }
  return i;
}

int main(){
  char string[22] = "Safada Cachorra Au Au";
  int size = ft_strlen(string);
  printf("%d", size);
  return 0;
}
