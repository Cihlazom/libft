/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshelob <cshelob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:37:40 by cshelob           #+#    #+#             */
/*   Updated: 2021/10/11 20:40:40 by cshelob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_isspace(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	number;

	number = 0;
	sign = 1;
	i = check_isspace(str);
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		if (number > 2147483647 && sign == 1)
			return (-1);
		if (number > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	return (number * sign);
}
