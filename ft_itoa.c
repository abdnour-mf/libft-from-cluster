/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:23:30 by amfarrej          #+#    #+#             */
/*   Updated: 2026/11/04 23:11:21 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(long n)
{
	size_t	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digit++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*number;
	long	nb;
	size_t	i;

	nb = n;
	i = counter(n);
	number = malloc((i + 1) * sizeof(char));
	if (!number)
		return (NULL);
	if (nb == 0)
		number[0] = '0';
	if (nb < 0)
	{
		number[0] = '-';
		nb = -nb;
	}
	number[i] = '\0';
	while (nb)
	{
		number[--i] = nb % 10 + '0';
		nb /= 10;
	}
	return (number);
}
