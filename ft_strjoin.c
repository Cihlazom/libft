/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshelob <cshelob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:40:13 by cshelob           #+#    #+#             */
/*   Updated: 2021/10/11 20:38:44 by cshelob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sum;
	int		i;
	int		j;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	i = 0;
	sum = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * sum + 1);
	if (!tmp)
		return (NULL);
	while (s1[i])
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		tmp[i++] = s2[j];
		j++;
	}
	tmp[i] = 0;
	return (tmp);
}
