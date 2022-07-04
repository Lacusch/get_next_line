CC =cc
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=5
DEPS = ../get_next_line.h
NAME = gnl_test
SOURCE = ../get_next_line.c ../get_next_line_utils.c main.c
OBJECT = $(SOURCE:.c=.o)

all :$(NAME)

$(NAME): $(OBJECT)
	gcc $(OBJECT) -o $(NAME)
clean:
	rm -f *.o
	rm -f ../*.o
fclean: clean
	rm -f gnl_test
re: fclean all
norm:
	norminette ../get_next_line.c ../get_next_line.h