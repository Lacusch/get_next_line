/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:55:13 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/07 15:03:30 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

char	read_line(int fd, char *str)
{
	char	*buff;
	int		char_read;

	buff = malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (buff == NULL)
		return (NULL);
	//Function to transfor char* into unsigned char* for testing \n
	while ((str) != '\n')
	{
		char_read = open(fd, buff, BUFFER_SIZE);
		if (char_read == 0)
			break ;
		if (char_read == -1)
			return (free (buff), NULL);
		buff[char_read] = '\0';
		str = ft_strjoin(str, buff);
		if (str == NULL)
			return (free(buff), NULL);
	}
	free (buff);
	return (str);
}

char	*get_next_line(int fd)
{
	static char		*chache;
	char			*ret;

	chache = read_line(fd, chache);
	if (BUFFER_SIZE <= 0 || fd < 0 || fd > OPEN_MAX)
		return (NULL);
	chache = read_line(fd, chache);
	if (chache == NULL)
		return (NULL);
	ret = ret_from_chache(chache);
	if (ret == NULL)
		return (NULL);
	if (chache == '\0')
	{
		free (chache);
		chache = NULL;
	}		
	return (ret);
}
