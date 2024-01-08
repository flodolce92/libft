/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flo-dolc <flo-dolc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:10:30 by flo-dolc          #+#    #+#             */
/*   Updated: 2024/01/10 21:14:52 by flo-dolc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*castdest;
	unsigned char	*castsrc;

	castdest = (unsigned char *) dest;
	castsrc = (unsigned char *) src;
	while (n > 0)
	{
		*castdest = *castsrc;
		castdest++;
		castsrc++;
		n--;
	}
	return (dest);
}
