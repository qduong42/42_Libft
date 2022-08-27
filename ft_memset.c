/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:18:11 by qduong            #+#    #+#             */
/*   Updated: 2022/08/27 12:15:28 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*a;
	size_t	i;

	if (!s)
		return (NULL);
	a = (char *)s;
	i = 0;
	while (i < n)
	{
		a[i] = (unsigned char) c;
		i++;
	}
	return (a);
}
