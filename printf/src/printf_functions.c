#include "../includes/ft_list.h"

int ft_printf(const char *str, ...){
  va_list arg;
  if(str == NULL){
    return 0;
  }
  va_start(arg, str);
  
  int i = 0;
  while(*str != '\0'){
    if (*str == '%' && strchr("di", *(str + 1)))
    {
      int nbr = va_arg(arg, int);
      ft_putnbr(nbr);
      ft_putchar(' ');
      str++;
    }
    else if (*str == '%' && strchr("s", *(str + 1)))
    {
      char * string = va_arg(arg, char *);
      // printf("%s", string);
      ft_putstr(string);
      ft_putchar(' ');
      str++;
    }
    else if (*str == '%' && strchr("c", *(str + 1)))
    {
      char character = va_arg(arg, int);
      // printf("%s", string);
      ft_putchar(character);
      ft_putchar(' ');
      str++;
    }
    else if (*str == '%' && strchr("u", *(str + 1)))
    {
      unsigned int nbr = va_arg(arg, unsigned int);
      // printf("%u", nbr);
      ft_putuint(nbr);
      ft_putchar(' ');
      str++;
    }
    else if (*str == '%' && strchr("p", *(str + 1)))
    {
      size_t ptr = va_arg(arg, size_t);
      // printf("%zu", ptr);
      ft_putstr("0x");
      ft_puthex(ptr);
      ft_putchar(' ');
      str++;
    }
    else if (*str == '%' && strchr("x", *(str + 1)))
    {
      size_t ptr = va_arg(arg, size_t);
      // printf("%zu", ptr);
      ft_puthex(ptr);
      ft_putchar(' ');
      str++;
    }
    else if (*str == '%' && strchr("X", *(str + 1)))
    {
      size_t ptr = va_arg(arg, size_t);
      // printf("%zu", ptr);
      ft_puthex_upper(ptr);
      ft_putchar(' ');
      str++;
    }
    else {
      // str++;
      ft_putchar(*str);
    }
    i++;
    str++;
  }
  // ft_putnbr(i);
  return 0;
}