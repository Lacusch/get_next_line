# get_next_line

The aim of this project is to make  a function that returns a line ending with a newline, read from a file descriptor.
This project is the basis for some graphical projects and it teaches us how to us [static variables](https://en.wikipedia.org/wiki/Static_variable).

### Function Prototype
```c
int	get_next_line(int fd, char **line);
```
This project uses the BUFFER_SIZE macro, which you can change by giving the compiler the -D BUFFER_SIZE=xx to set the amount of bytes to scan
with each loop.
