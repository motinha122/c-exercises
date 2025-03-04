#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_is_sort(int *tab, int length, int (*f)(int, int));
void ft_putchar(char c);
void ft_putnbr(int n);
void ft_putstr(char *str);

#endif