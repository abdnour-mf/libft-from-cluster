/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 13:46:12 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/15 15:33:24 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n  && s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    if (i == n)
        return (0);

    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int main()
{
     char s1[] = "hello";
    char s2[] = "hello ainja";
    printf("%d\n", ft_strncmp(s1, s2, 6));
    printf("%d\n", strncmp(s1, s2, 6));
    return (0); 

    printf("1. Equal:       %d | %d\n",
        ft_strncmp("hello", "hello", 5),
        strncmp("hello", "hello", 5));

    printf("2. Different:   %d | %d\n",
        ft_strncmp("hello", "hellp", 5),
        strncmp("hello", "hellp", 5));

    printf("3. n = 0:       %d | %d\n",
        ft_strncmp("hello", "world", 0),
        strncmp("hello", "world", 0));

    printf("4. Partial:     %d | %d\n",
        ft_strncmp("hello", "hellp", 4),
        strncmp("hello", "hellp", 4)); 

    printf("5. Shorter s1:  %d | %d\n",
        ft_strncmp("abc", "abcd", 4),
        strncmp("abc", "abcd", 4));

    printf("6. Shorter s2:  %d | %d\n",
        ft_strncmp("abcd", "abc", 4),
        strncmp("abcd", "abc", 4));

     printf("7. Empty:       %d | %d\n",
        ft_strncmp("", "abc", 3),
        strncmp("", "abc", 3));

    printf("8. Both empty:  %d | %d\n",
        ft_strncmp("", "", 5),
        strncmp("", "", 5));

    printf("9. First char:  %d | %d\n",
        ft_strncmp("a", "b", 1),
        strncmp("a", "b", 1));

    printf("10. Difference after n: %d | %d\n",
        ft_strncmp("abcX", "abcY", 3),
        strncmp("abcX", "abcY", 3)); 
	return (0);
}
 */