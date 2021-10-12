/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshelob <cshelob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:40:20 by cshelob           #+#    #+#             */
/*   Updated: 2021/10/12 21:08:10 by cshelob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (src[j])
	{
		j++;
	}
	if (size == 0)
		return (j);
	size--;
	while (size && src[i])
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (j);
}
