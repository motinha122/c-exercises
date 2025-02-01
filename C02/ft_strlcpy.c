#include <stdlib.h>
#include <unistd.h>
#include <bsd/string.h>
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str, int size)
{
  char *p = str;
  char *pica = p + size;

  while (p < pica)
  {
    ft_putchar(*p);
    p++;
  }
  printf("\n");
}

size_t ft_strlcpy(char *dst, char *src, size_t dstsize)
{
  unsigned int i = 0;
  while (src[i] != '\0' && i < strlen(src))
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return strlen(src);
}

int main()
{
  char str[] = "batata batata batata batata";
  char str2[] = "carro";

  char str3[] = "batata batata batata batata";
  char str4[] = "carro";

  printf("retorno: %ld\n string: %s\n", ft_strlcpy(str, str2, 6), str);
  ft_putstr(str, 10);

  printf("retorno bdsm: %ld\n string bdsm: %s\n", strlcpy(str3, str4, 6), str3);
  ft_putstr(str3, 10);
  return 0;
}