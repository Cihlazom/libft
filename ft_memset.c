/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshelob <cshelob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:39:36 by cshelob           #+#    #+#             */
/*   Updated: 2021/10/12 19:49:42 by cshelob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	tmp;

	tmp = c;
	p = (unsigned char *) arr;
	while (len > 0)
	{
		*p++ = tmp;
		len--;
	}
	return (arr);
}
	