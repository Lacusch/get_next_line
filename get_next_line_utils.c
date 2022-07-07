/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:55:10 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/07 14:59:22 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	p = malloc((ft_strlen(s1) + ft_strlen(s2) + 1)* sizeof(char));
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

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*new_str;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new_str = malloc (sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, &s[start], len + 1);
	return (new_str);
}
