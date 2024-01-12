/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flo-dolc <flo-dolc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 00:37:59 by flo-dolc          #+#    #+#             */
/*   Updated: 2024/01/12 23:53:01 by flo-dolc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != c && str[i])
			&& (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	fill_word(char *dest, const char *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static void	fill_split(char **split, const char *str, char c)
{
	int	word;
	int	i;
	int	len;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c || str[i] == '\0')
			i++;
		else
		{
			len = 1;
			while (str[i + len] != c && str[i + len])
				len++;
			split[word] = (char *) malloc(sizeof(char) * (len + 1));
			fill_word(split[word], &str[i], len);
			i += len;
			word++;
		}
	}
}

char	**ft_split(const char *str, char c)
{
	char	**split;
	int		words;

	words = count_words(str, c);
	split = (char **) malloc(sizeof(char *) * (words + 1));
	split[words] = NULL;
	fill_split(split, str, c);
	return (split);
}
