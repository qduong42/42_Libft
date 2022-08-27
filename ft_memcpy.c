/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:55:04 by qduong            #+#    #+#             */
/*   Updated: 2022/08/27 12:18:49 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ldest;
	char	*lsrc;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	lsrc = (char *) src;
	ldest = (char *) dest;
	i = 0;
	while (i < n)
	{
		ldest[i] = lsrc[i];
		i++;
	}
	return (dest);
}
