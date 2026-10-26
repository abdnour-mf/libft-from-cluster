/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:09:08 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/16 14:34:29 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <limits.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
	size_t i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);

    return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

int	main(void)
{
	char	a[] = "hello";
	char	b[] = "hello";
	char	c[] = "hellp";
	char	d[] = "jello";
	char	e[] = "hell";
	char	f[] = {'h', 'e', '\0', 'x'};
	char	g[] = {'h', 'e', '\0', 'y'};
	unsigned char	x[] = {1, 2, 255, 4};
	unsigned char	y[] = {1, 2, 0, 4};

	printf("1. Identical:          ft: %d | real: %d\n",
		ft_memcmp(a, b, 5), memcmp(a, b, 5));

	printf("2. First byte differs: ft: %d | real: %d\n",
		ft_memcmp(a, d, 5), memcmp(a, d, 5));

	printf("3. Last byte differs:  ft: %d | real: %d\n",
		ft_memcmp(a, c, 5), memcmp(a, c, 5));

	printf("4. Difference beyond n: ft: %d | real: %d\n",
		ft_memcmp(a, c, 4), memcmp(a, c, 4));

	printf("5. n = 0:              ft: %d | real: %d\n",
		ft_memcmp(a, c, 0), memcmp(a, c, 0));

	printf("6. n = 1:              ft: %d | real: %d\n",
		ft_memcmp(a, d, 1), memcmp(a, d, 1));

	printf("7. Different lengths:  ft: %d | real: %d\n",
		ft_memcmp(a, e, 5), memcmp(a, e, 5));

	printf("8. Empty strings:      ft: %d | real: %d\n",
		ft_memcmp("", "", 1), memcmp("", "", 1));

	printf("9. After null byte:    ft: %d | real: %d\n",
		ft_memcmp(f, g, 4), memcmp(f, g, 4));

	printf("10. High byte:         ft: %d | real: %d\n",
		ft_memcmp(x, y, 4), memcmp(x, y, 4));

	printf("11. Same binary data:  ft: %d | real: %d\n",
		ft_memcmp(x, x, 4), memcmp(x, x, 4));

	printf("12. Reverse comparison: ft: %d | real: %d\n",
		ft_memcmp(c, a, 5), memcmp(c, a, 5));

	printf("13. Middle differs:    ft: %d | real: %d\n",
		ft_memcmp("abcde", "abXde", 5),
		memcmp("abcde", "abXde", 5));

	{
		unsigned char p[] = {CHAR_MAX, CHAR_MAX + 1};
		unsigned char q[] = {CHAR_MAX, CHAR_MAX};

		printf("14. High boundary:     ft: %d | real: %d\n",
			ft_memcmp(p, q, 2), memcmp(p, q, 2));
	}

	return (0);
}