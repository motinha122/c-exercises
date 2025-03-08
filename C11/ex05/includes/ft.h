#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EQUAL(str1, str2) (ft_strcmp(str1, str2) == 0 ? 1 : 0)

void ft_putchar(char c);
void ft_putnbr(int n);
void ft_putstr(char *str);
int ft_atoi(char *str);
int check_error(int ac, char *argv[]);
int ft_strcmp(char *s1, char *s2);
void doop(char *argv[]);

int ft_sum(int a, int b);
int ft_minus(int a, int b);
int ft_mult(int a, int b);
int ft_div(int a, int b);
int ft_mod(int a, int b);

#endif