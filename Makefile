all:
	gcc get_next_line.c get_next_line_utils.c main.c -fsanitize=address
norm:
	norminette get_next_line.c get_next_line_utils.c main.c
clean:
	rm -f a.out
re: clean all