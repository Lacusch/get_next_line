/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:45:24 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/04 16:56:51 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../get_next_line.h"
int main (void)

{
	int		fd;
	char	*buff;
	int		l_read;
	
	buff = calloc(10, sizeof(char));
	fd = open("test.txt", O_RDONLY);
	l_read = read(fd, buff, 20);
	get_next_line(fd);
	return(0);
}