all:
	gcc get_next_line.c get_next_line_utils.c main.c
norm:
	norminette get_next_line.c get_next_line_utils.c get_next_line.h get_next_line_utils_bonus.c get_next_line_bonus.h get_next_line_bonus.c 
clean:
	rm -f a.out
re: clean all
