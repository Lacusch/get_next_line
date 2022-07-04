/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:44:22 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/04 16:02:54 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

int	test(void)

{
	int		fd;
	char	*buff;
	int		l_read;

	buff = calloc(BUFFER_SIZE, sizeof(char));
	fd = open("test.txt", O_RDONLY);
	l_read = read(fd, buff, BUFFER_SIZE + 1);
	buff[l_read +1] = '\0';
	printf("The buffer is :%s", buff);
	return (0);
}
