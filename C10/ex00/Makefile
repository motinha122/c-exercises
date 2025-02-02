SRC_FILES := $(shell find $(SRC_DIRS) -name '*.c' -or -name '*.s')

OBJS := $(SRC_FILES:.c=.o)

NAME := ft_display_file

CC = gcc
RM = rm -f

CFLAGS := -Wall -Wextra -Werror -g

SRC_DIRS := ./src

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

all: $(NAME) 

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

lep:
	echo "au au"

run:
	./$(NAME)

valquiria:
	valgrind ./$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@