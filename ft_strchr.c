/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:20:11 by qduong            #+#    #+#             */
/*   Updated: 2022/08/27 12:20:30 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*pch;
	int		lstr;

	if (!s)
		return (NULL);
	pch = (char *) s;
	i = 0;
	lstr = (ft_strlen(s) + 1);
	while (i < lstr)
	{
		if (s[i] == (unsigned char) c)
		{
			return (pch + i);
		}
		i++;
	}
	return (NULL);
}
