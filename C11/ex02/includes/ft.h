#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_any(char **tab, int (*f)(char *));
int ft_isupper(char *string);
int ft_islower(char *string);
void ft_putchar(char c);
void ft_putnbr(int n);

#endif