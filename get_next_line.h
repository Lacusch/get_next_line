/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:55:16 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/07/05 12:41:58 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "limits.h"
# include "fcntl.h"
# include "unistd.h"

char	*get_next_line(int fd);
char	*ft_strjoin(char const	*s1, char const	*s2);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	read_line(int fd, char *str);

#endif
