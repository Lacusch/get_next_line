CC =cc
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=5
DEPS = ../get_next_line.h
NAME = gnl_test
SOURCE = ../get_next_line.c ../get_next_line_utils.c main.c
OBJECT = $(SOURCE:.c=.o)

all :$(NAME)

$(NAME): $(OBJECT)
	gcc $(OBJECT) -o $(NAME)
