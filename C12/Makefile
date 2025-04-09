CC = gcc
#Compilation flags
CFLAGS = -Wall -Iincludes -I../Utils/includes -g
#Library flag
LDFLAGS = -L../Utils -lutils

SRC_DIR = src
INCLUDE_DIR = includes
BUILD_DIR = build

#executable
NAME = $(BUILD_DIR)/ft_list

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

run:
	./$(NAME)

valquiria:
	valgrind ./$(NAME)

clean:
	rm -rf $(BUILD_DIR)

#Specifies that "all" and "clean" are commands, not files
.PHONY: all clean 