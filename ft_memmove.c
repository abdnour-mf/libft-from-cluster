/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:52:40 by amfarrej          #+#    #+#             */
/*   Updated: 2026/11/04 23:18:16 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*sorc;

	if (dst == src || n == 0)
		return (dst);
	dest = (unsigned char *)dst;
	sorc = (const unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	i = n;
	while (i > 0)
	{
		i--;
		dest[i] = sorc[i];
	}
	return (dst);
}
