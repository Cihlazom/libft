/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshelob <cshelob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:39:58 by cshelob           #+#    #+#             */
/*   Updated: 2021/10/12 20:24:55 by cshelob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	unl(char **str, int size)
{
	while (size)
	{
		free(str[size]);
		size--;
	}
	free(str);
	return (-1);
}

static int	count_words(const char *str, char charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0')
			&& !(str[i] == charset || str[i] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, const char *from, char charset)
{
	int	i;

	i = 0;
	while (!(from[i] == charset || from[i] == '\0'))
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int	write_split(char **split, const char *str, char charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == charset || str[i] == '\0')
			i++;
		else
		{
			j = 0;
			while (!(str[i + j] == charset || str[i + j] == '\0'))
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (split[word] == NULL)
				return (unl(split, word));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		words;

	if (!str)
		return (NULL);
	words = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == -1)
		return (NULL);
	return (res);
}
