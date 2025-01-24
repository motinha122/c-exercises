#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnumbers(int n)
{
  int divisor = 1;
  int remainder = n;
  int quot = 0;

  if (n == 0)
  {
    ft_putchar(48);
  }

  if (n < 0)
  {
    remainder = n * (-1);
    ft_putchar('-');
  }

  while (divisor <= remainder)
  {
    divisor = divisor * 10;
  }
  divisor = divisor / 10;

  while (divisor >= 1)
  {
    quot = remainder / divisor;
    remainder = remainder % divisor;
    ft_putchar(quot + 48);
    divisor = divisor / 10;
  }
  // ft_putchar('\n');
}

void ft_putstr(char *str)
{
  char *p = str;

  while (*p != '\0')
  {
    ft_putchar(*p);
    p++;
  }
}

void ft_print_dec_to_hex(int n)
{
  char hex[] = "0123456789abcdef";
  int result[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int i = 0;
  int quot = 1;
  int dividend = n;
  int remainder = 0;

  while (quot != 0)
  {
    quot = dividend / 16;
    remainder = dividend % 16;
    dividend = quot;
    result[i] = remainder;
    i++;
  }
  int hexIndex = 0;

  while (i != 0)
  {
    i--;
    hexIndex = result[i];
    // ft_putnumbers(hexIndex);
    ft_putchar(hex[hexIndex]);
    // ft_putchar('\n');
  }
  // ft_putchar(' ');
}

void ft_putstr_non_printable(char *string)
{
  int i = 0;
  // int decIndex = 0;

  while (string[i] != '\0')
  {
    if (string[i] >= 0 && string[i] <= 31)
    {
      ft_putchar('\\');
      ft_print_dec_to_hex(string[i]);
    }
    else
    {
      ft_putchar(string[i]);
    }
    i++;
  }
}

void ft_show_line(size_t size){
  size_t i = 0;
  int max_number = size;
  int number = 0;
  int max_tabs = 1;
  int tabs = 0;

  char str[] = "Numeros:";
  char str2[] = "os trem printado";

  while (i != size)
  {
    ft_putstr(str);
    ft_putstr("     ");

    while (number != max_number)
    {
      ft_putnumbers(number);
      ft_putnumbers(number);
      ft_putnumbers(number);
      ft_putnumbers(number);
      number++;
      ft_putchar(' ');
    }
    number = 0;

    while (tabs < max_tabs)
    {
      ft_putstr("     ");
      tabs++;
    }
    tabs = 0;

    ft_putstr(str2);

    max_tabs++;
    max_number--;
    ft_putchar('\n');
    i++;
  }
}

// void *ft_print_memory(void *addr, unsigned int size){

// }

void ft_show_pointer(void *ptr){
  long dick = (long)ptr;
  ft_putnumbers(dick);
  ft_print_dec_to_hex(dick);
}

int main(void)
{
  char str[] = "au au";
  ft_show_pointer(str);
  // ft_show_line(10);
  // printf("5 \t 555 555 555 \t 5 \n");
  // printf("5 \t 555 555 \t 5 \n");
  // printf("5 \t 555 \t \t 5 \n");
  return 0;
} 