#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sysexits.h>

#define BUFFER_SIZE 50
#define LIMIT 20 

#define ZERO_ARGS "File name missing."
#define MANY_ARGS "Too many arguments."
#define CANT_READ "Cannot read file."

int ft_strcmp(char *s1, char *s2);

void print_error(char *str);

void print_buffer(char *filename);

void print_buffer_n_bytes(char *filename, int n_bytes);

#endif