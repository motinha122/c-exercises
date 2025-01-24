#include <stdio.h>

int main(__attribute__((unused)) int argc, char *argv[])
{
  int i = argc - 1;
  while (i != 0)
  {
    printf("%s\n", argv[i]);
    i--; 
  }
  return 0;
}
