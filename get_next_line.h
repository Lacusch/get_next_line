/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:55:16 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/09 16:30:04 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "limits.h"
# include "fcntl.h"
# include "unistd.h"
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char const	*s1, char const	*s2);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*read_line(int fd, char *str);
char	*ret_from_static_str(char *static_src);
size_t	get_lenght(const char *str);
int		char_pointer_test(char *str, char test);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*move_str(char	*dest, char	*src, size_t	len);

#endif
