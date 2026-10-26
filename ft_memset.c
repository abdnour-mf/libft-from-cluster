/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:27:44 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/14 14:10:03 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *s = (unsigned char *)b;
	size_t i;

	i = 0;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}


/* #include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
	/* char str1[] = "un dia de partit";
    char str2[] = "un dia de partit";

    ft_memset(str1 + 3, '.', 3);
    memset(str2 + 3, '.', 3);

    printf("ft_memset: %s\n", str1);
    printf("memset:    %s\n", str2); 

	int s1[] = {1, 1, 0, 2};
	printf("%d\n", ft_memset(s1, 'X', 3));
	
	return (0);
} */