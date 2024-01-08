/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flo-dolc <flo-dolc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:10:30 by flo-dolc          #+#    #+#             */
/*   Updated: 2024/01/10 21:04:52 by flo-dolc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t len)
{
	size_t			i;
	unsigned char	*castptr;

	i = 0;
	castptr = (unsigned char *) ptr;
	while (i < n)
	{
		if (castptr[i] == (unsigned char *) value)
			return (&castptr[i]);
		i++;
	}
	return (NULL);
}
