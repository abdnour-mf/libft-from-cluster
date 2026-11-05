/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:27:44 by amfarrej          #+#    #+#             */
/*   Updated: 2026/11/04 22:54:14 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>
int main ()
{
	int nb = 2006;
	
	ft_memset(&nb, 5, 2);
	ft_memset(&nb, 1337, 1);
	
	printf("%d\n", nb);
} */
//707406378

//00000000 00000000 00000101 00111001

//deference (access , edit)

//0xFF -> 255