/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:55:13 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/07 16:28:40 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

char	*ret_from_static_str(char *static_src)
{
	size_t	lenght;
	char	*str_out;

	if (static_src == NULL)
		return (NULL);
	lenght = get_lenght(static_src);
	str_out = malloc(lenght * sizeof(char) + 1);
	if (str_out == NULL)
		return (NULL);
	str_out = ft_substr(static_src, 1, lenght);
	return (str_out);
}

int	char_pointer_test(char *str, char test)
{
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str == (unsigned char)test)
			return (1);
	}
	return (0);
}

char	*read_line(int fd, char *str)
{
	char	*buff;
	int		char_read;

	buff = malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (buff == NULL)
		return (NULL);
	while (char_pointer_test(str, '\n' != 1))
	{
		char_read = read(fd, buff, BUFFER_SIZE);
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
	static char		*static_str;
	char			*ret;

	static_str = read_line(fd, static_str);
	if (BUFFER_SIZE <= 0 || fd < 0 || fd > OPEN_MAX)
		return (NULL);
	static_str = read_line(fd, static_str);
	if (static_str == NULL)
		return (NULL);
	ret = ret_from_static_str(static_str);
	if (ret == NULL)
		return (NULL);
	if (static_str == '\0')
	{
		free (static_str);
		static_str = NULL;
	}		
	return (ret);
}
