/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:39:43 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/23 01:43:42 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# endif

# include "unistd.h"
# include <stdlib.h>

# include "limits.h"
# include <fcntl.h>

char	*read_than_stash(int fd, char* stash);
char	*cut_from_static(char* stash);
int	get_lenght(char *stash);
int	is_new_line (char * str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);
char	*move_str(char *dest, char *src, size_t len);
char	*ft_strjoin(char *s1, char *s2);
int	ft_strchr_bool(const char *s, int c);
char	*get_next_line(int fd);
