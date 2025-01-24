#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * ft_strcpy(char *dest, char *src){
  int i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i + 1] = '\0';
  return dest;
}

int main()
{
  char string[100] = "Safada quente";
  char *string2 = (char *)malloc(8 * sizeof(char));
  // string2 = "SAFADA";
  char *batata = ft_strcpy(string2, string);
  printf("%s ", batata);
  printf("%s ", string);
  printf("%s", string2);
  printf("++ \n");

  char *cachorra = (char *)malloc(8 * sizeof(char));
  // string2 = "SAFADA";
  char *safada = strcpy(cachorra, string);
  printf("%s ", safada);
  printf("%s ", string);
  printf("%s", cachorra);
  printf("++ \n");
  return 0;
}
