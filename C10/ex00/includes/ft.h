#ifndef FT_H
#define FT_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sysexits.h>

#define BUFFER_SIZE 50

#define ZERO_ARGS "File name missing."
#define MANY_ARGS "Too many arguments."
#define CANT_READ "Cannot read file."

void print_error(char *str);

#endif