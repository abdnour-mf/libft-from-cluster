/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:09:08 by amfarrej          #+#    #+#             */
/*   Updated: 2026/11/04 22:32:54 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && p1[i] == p2[i])
		i++;
	return (p1[i] - p2[i]);
}
