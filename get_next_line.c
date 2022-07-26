/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:39:41 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/26 14:44:01 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

char	*get_next_line(int fd)
{
	static char		*stash;
	char			*ret;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	stash = read_than_stash(fd, stash);
	if (stash == NULL)
		return (NULL);
	ret = cut_from_static(stash);
	if (ret == NULL)
		return (NULL);
	if (*stash == '\0')
	{
		free (stash);
		stash = NULL;
	}
	return (ret);
}

char	*read_than_stash(int fd, char *stash)
{
	char	*buff;
	int		char_read;

	buff = malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (buff == NULL)
		return (NULL);
	while (!ft_strchr_bool(stash, '\n'))
	{
		char_read = read(fd, buff, BUFFER_SIZE);
		if (char_read == 0)
			break ;
		if (char_read == -1)
			return (free(buff), NULL);
		buff[char_read] = '\0';
		stash = ft_strjoin (stash, buff);
		if (stash == NULL)
			return (free(buff), NULL);
	}
	free(buff);
	return (stash);
}

char	*cut_from_static(char	*stash)
{
	int		lenght;
	char	*str_out;

	if (stash == NULL)
		return (NULL);
	lenght = get_lenght(stash);
	str_out = malloc(lenght * ((sizeof(char) + 1)));
	if (str_out == NULL)
		return (NULL);
	ft_memcpy(str_out, stash, lenght);
	str_out[lenght] = '\0';
	move_str(stash, &stash[lenght], ft_strlen(&stash[lenght]));
	return (str_out);
}

int	get_lenght(char *stash)
{
	int	len;

	len = 0;
	while (stash != NULL && stash[len] != '\0')
	{
		if (stash[len] == '\n')
		{
			len++;
			break ;
		}
		len++;
	}
	return (len);
}
