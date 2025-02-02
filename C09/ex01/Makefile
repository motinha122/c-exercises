SRC_FILES := $(shell find $(SRC_DIRS) -name '*.c' -or -name '*.s')

OBJS := $(SRC_FILES:.c=.o)

NAME := libft.a

CC = gcc
RM = rm -f

CFLAGS := -Wall -Wextra -Werror -g

SRC_DIRS := ./srcs

AR = ar -rcs 

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME) 

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@