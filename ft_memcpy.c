/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshelob <cshelob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:39:28 by cshelob           #+#    #+#             */
/*   Updated: 2021/10/11 20:38:15 by cshelob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*to;
	char	*from;

	if (!dst && !src)
		return (NULL);
	to = (char *)dst;
	from = (char *)src;
	while (n--)
	{
		*to++ = *from++;
	}
	return (dst);
}
