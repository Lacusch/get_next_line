CC =cc
CFLAGS= -Wall -Wextra -Werror  -D BUFFER_SIZE=5
NAME = test
SOURCE = test.c main.c
OBJECT = $(SOURCE:.c=.o)

all :$(NAME)

$(NAME): $(OBJECT)
	gcc $(OBJECT) -o test
clean:
	rm -f *.o
fclean: clean
	rm -f test
re: fclean all
norm:
	norminette test.c
