CC =cc
CFLAGS= -Wall -Wextra -Werror
NAME = test
SOURCE = test.c main.c
OBJECT = $(SOURCE:.c=.o)

all :$(NAME)

$(NAME): $(OBJECT)
	gcc $(OBJECT) -o test.a
clean:
	rm -f *.o
fclean: clean
	rm -f *.a
norm:
	norminette test.c
