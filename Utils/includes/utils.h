#ifndef UTILS_H
#define UTILS_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

void ft_putchar(char c);
void ft_putnbr(int n);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
void ft_puthex(size_t number);
void ft_puthex_upper(size_t number);
int ft_putuint(unsigned int n);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

#endif