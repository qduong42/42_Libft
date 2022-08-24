/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:55:10 by qduong            #+#    #+#             */
/*   Updated: 2022/07/29 11:04:28 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

void		ft_bzero(void *s, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_nlen(const char *s);
int			ft_gnl_strrchr(const char *s, int c);
char		*get_next_line(int fd);
char		*ft_strjoin(char const *s1, char const *s2);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
# endif

#endif
