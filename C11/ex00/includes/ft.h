#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void printNumber(int nbr);
void printChar(char c);

void ft_foreach(int *tab, int length, void (*f)(int));
void ft_putchar(char c);
void ft_putnbr(int n);

#endif