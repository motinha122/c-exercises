#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
  int i = 0;

  while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
  {

    i++;
  }

  unsigned char char1 = s1[i];
  unsigned char char2 = s2[i];

  // printf("%d - %d \n", char1, char2);
  return char1 - char2;
}

void ft_swap(char **a, char **b)
{
  char * swap = *a;
  *a = *b;
  *b = swap;
}

int main(__attribute__((unused)) int argc, char *argv[])
{
  int i = argc;
  int j = 0;

  while (i > 0)
  {
    while (j < argc - 1)
    {
      if (ft_strcmp(argv[j],argv[j + 1]) > 0)
      {
        printf("d - %s - %s \n", argv[j], argv[j + 1]);
        ft_swap(&argv[j], &argv[j + 1]);
        printf("d - %s - %s \n", argv[j], argv[j + 1]);
      }
      j++;
    }
    j = 0;
    i--;
  }

  i = 1;
  while (argv[i] != NULL)
  {
    printf("%s\n", argv[i]);
    i++;
  }

  return 0;
}
