/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshelob <cshelob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:40:39 by cshelob           #+#    #+#             */
/*   Updated: 2021/10/11 20:39:54 by cshelob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	h_len;
	size_t	size;

	if (*needle == '\0')
		return ((char *)haystack);
	n_len = ft_strlen(needle);
	h_len = ft_strlen(haystack);
	if (h_len < n_len || len < n_len)
		return (0);
	if (h_len > len)
		size = len;
	else
		size = h_len;
	while (size-- >= n_len)
	{
		if (ft_memcmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
