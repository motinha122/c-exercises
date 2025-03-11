CC = gcc
CFLAGS = -Wall -g
SRC_DIR = src
INCLUDE_DIR = includes
NAME = libutils.a

SRCS = $(SRC_DIR)/utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)