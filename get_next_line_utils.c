/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:55:10 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/09 16:32:59 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const	*s1, char const	*s2)

{
	char	*p;
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		return (NULL);
	p = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		while (i < ft_strlen(s1))
		{
			p[i] = s1[i];
			i++;
		}
		p[i] = s2[i2];
		i++;
		i2++;
	}
	return (p);
}

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempd;
	unsigned char	*temps;

	i = 0;
	tempd = (unsigned char *)dst;
	temps = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
	tempd[i] = temps[i];
	i++;
	}
	return (dst);
}

size_t	get_lenght(const char *str)
{
	size_t	lenght;

	lenght = 0;
	while (str != NULL || str[lenght] != '\0')
	{
		if (str[lenght] == '\n')
		{
			lenght++;
			break ;
		}
		lenght++;
	}
	return (lenght);
}
