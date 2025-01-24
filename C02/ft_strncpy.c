#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * ft_strncpy(char *dest, char *src, unsigned int n){
  unsigned int i = 0;
  while (src[i] != '\0' && i < n)
  {
    dest[i] = src[i];
    i++;
  }
  while(i < n){
    dest[i] = '\0';
    i++;
  }
  return dest;
}

int main()
{
  char src[] = "Hello";

  char dest[] = "World1";

  printf("%s", ft_strncpy(dest, src, 3));

  printf("\n%s", strncpy(dest, src, 3));

  printf("\n%s", ft_strncpy(dest, src, 5));

  printf("\n%s", strncpy(dest, src, 5));

  printf("\n%s", ft_strncpy(dest, src, 7));

  printf("\n%s", strncpy(dest, src, 7));
  return 0;
}
