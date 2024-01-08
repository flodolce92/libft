/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flo-dolc <flo-dolc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 03:18:17 by flo-dolc          #+#    #+#             */
/*   Updated: 2024/01/10 03:29:21 by flo-dolc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	*caststr;

	i = 0;
	caststr = (char *) str;
	while (caststr[i])
	{
		if (caststr[i] == ch)
			return (&caststr[i]);
		i++;
	}
	return (NULL);
}
