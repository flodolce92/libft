/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flo-dolc <flo-dolc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:19:35 by flo-dolc          #+#    #+#             */
/*   Updated: 2024/01/13 20:20:36 by flo-dolc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_size(int n)
{
	int	size;
	int	num;

	size = 0;
	if (n == 0)
		size = 1;
	if (n == -2147483648)
	{
		size = 11;
		return (size);
	}
	if (n < 0)
	{
		n = -n;
		size++;
	}
	num = n;
	while (num > 0)
	{
		num = num / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;

	size = check_size(n);
	str = (char *) malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str[size--] = '\0';
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[size] = (n % 10) + 48;
		n = n / 10;
		size--;
	}
	return (str);
}
