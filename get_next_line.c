/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:55:13 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/13 12:27:53 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

char	*move_str(char	*dest, char	*src, size_t	len)
{
	size_t	i;

	i = 0;
	if (dest == NULL & src == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i++] = '\0';
	}
	return (dest);
}

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
	ft_memcpy(str_out, static_src, lenght);
	str_out[lenght] = '\0';
	move_str(static_src, &static_src[lenght], ft_strlen(&static_src[lenght]));
	return (str_out);
}

bool	char_pointer_test(const char *str, int test)
{
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str == (unsigned char)test)
			break ;
		str++;
	}
	return (*str == (unsigned char)test);
}

char	*read_line(int fd, char *str)
{
	char	*buff;
	int		char_read;

	buff = malloc(BUFFER_SIZE * sizeof(char) + 1);
	if (buff == NULL)
		return (NULL);
	while (char_pointer_test(str, '\n'))
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
