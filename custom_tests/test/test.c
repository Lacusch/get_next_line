/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:44:22 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/02 15:38:20 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

// int	main(int fd)
// {
// 	int		c;
// 	char	buff[BUFFER_SIZE + 1];
// 	c = 1;
// 	c = read(fd, &buff, BUFFER_SIZE);
// 	if (c < 0)
// 	{
// 		return (0);
// 	}
// 	printf("%s", buff);
// 	return(1);
// }

int	test(void)

{
	int s;
	char *buf;
	buf = (char *) calloc(8, sizeof(char));
	s = read(1, buf, 8);
	buf[s] = '\0';
	printf("\n%s", buf);
	return (0);
}
