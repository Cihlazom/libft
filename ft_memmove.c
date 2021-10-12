/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshelob <cshelob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:39:33 by cshelob           #+#    #+#             */
/*   Updated: 2021/10/11 20:38:18 by cshelob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*p;
	char	*q;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		p = (char *)dest;
		q = (char *)src;
		while (count--)
		{
			*p++ = *q++;
		}
	}
	else
	{
		p = (char *)dest + count;
		q = (char *)src + count;
		while (count--)
		{
			*--p = *--q;
		}
	}
	return (dest);
}
