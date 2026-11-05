/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:19:45 by amfarrej          #+#    #+#             */
/*   Updated: 2026/11/05 20:23:07 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*sorc;
	size_t				i;

	dest = (unsigned char *)dst;
	sorc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = sorc[i];
		i++;
	}
	return (dst);
}

/* #include <string.h>
int main()
{
	printf("%s\n", (char *)ft_memcpy(NULL, NULL, 2));
	printf("%s\n", (char *)ft_memcpy(NULL, NULL, 0));
} */