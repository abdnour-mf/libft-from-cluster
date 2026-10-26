/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:35:53 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/17 12:15:12 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t i;
	size_t j;

	i = 0;

	if (sub[0] == '\0') return ((char *)str);

	while (i < len && str[i])
	{
		j = 0;
		while (str[ i+ j] == sub[j] && str[i + j] && i + j < len)
			j++;
		if (sub[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}


#include <stdio.h>
#include <string.h>

//int	main(void)
//{
	/* char str[] = "hello";
	char sub[] = "he";

	printf("%s\n", ft_strnstr(str, sub, 2));
	printf("%s\n", strnstr(str, sub, 2)); */
	
	/*char	*big;

	 big = "Hello world";

	printf("1. Basic match:       ft: %s | real: %s\n",
		ft_strnstr(big, "world", 11), strnstr(big, "world", 11));

	printf("2. Match at start:    ft: %s | real: %s\n",
		ft_strnstr(big, "Hello", 11), strnstr(big, "Hello", 11));

	printf("3. Match in middle:   ft: %s | real: %s\n",
		ft_strnstr(big, "lo", 11), strnstr(big, "lo", 11));

	printf("4. No match:          ft: %s | real: %s\n",
		ft_strnstr(big, "xyz", 11), strnstr(big, "xyz", 11));

	printf("5. Empty little:      ft: %s | real: %s\n",
		ft_strnstr(big, "", 11), strnstr(big, "", 11));

	printf("6. len = 0:           ft: %s | real: %s\n",
		ft_strnstr(big, "Hello", 0), strnstr(big, "Hello", 0));

	printf("7. Match beyond len:  ft: %s | real: %s\n",
		ft_strnstr(big, "world", 5), strnstr(big, "world", 5));

	printf("8. Exact len match:   ft: %s | real: %s\n",
		ft_strnstr(big, "Hello", 5), strnstr(big, "Hello", 5));

	printf("9. Partial match:     ft: %s | real: %s\n",
		ft_strnstr(big, "world!", 11), strnstr(big, "world!", 11));

	printf("10. Repeated chars:   ft: %s | real: %s\n",
		ft_strnstr("banana", "ana", 6),
		strnstr("banana", "ana", 6));

	printf("11. Repeated match:   ft: %s | real: %s\n",
		ft_strnstr("abcabc", "abc", 6),
		strnstr("abcabc", "abc", 6));

	printf("12. Big is empty:     ft: %s | real: %s\n",
		ft_strnstr("", "a", 1), strnstr("", "a", 1));

	printf("13. Both empty:       ft: %s | real: %s\n",
		ft_strnstr("", "", 0), strnstr("", "", 0));

	printf("14. Little too long:  ft: %s | real: %s\n",
		ft_strnstr("abc", "abcd", 3),
		strnstr("abc", "abcd", 3));

	printf("15. Match at end:     ft: %s | real: %s\n",
		ft_strnstr("abcdef", "ef", 6),
		strnstr("abcdef", "ef", 6)); */

	//return (0);
//}


int main()
{
	char str[] = "hello world 1337";
	char sub[] = "worl";
	
	printf("%s\n", ft_strnstr(NULL, sub, 0));
	printf("%s\n", strnstr(str, sub, 0));

	return (0);
}