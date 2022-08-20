/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:53:20 by qduong            #+#    #+#             */
/*   Updated: 2022/08/20 18:47:17 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//ft_bzero fails with max nmemb and size
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pch;

	pch = malloc((size * nmemb));
	if (!pch)
		return (NULL);
	ft_bzero (pch, nmemb * size);
	return (pch);
}
