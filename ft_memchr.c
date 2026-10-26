/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:34:58 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/15 17:04:46 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p;
    size_t i;
    
    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (p[i] == (unsigned char)c)
            return ((char *)&s[i]);
        i++;
    }
    return (NULL);
}

/* int main(void)
{
    char s[] = "libft-test-med";
    int numbers[] = {42, 1337, 42, 10};
    void *ft_result;
    void *real_result;

    // STRING TESTS 
    printf("=== STRING TESTS ===\n");

    ft_result = ft_memchr(s, 'l', sizeof(s));
    real_result = memchr(s, 'l', sizeof(s));
    printf("1. Address: %p | %p\n", ft_result, real_result);
    printf("   String:  %s | %s\n",
        (char *)ft_result, (char *)real_result);

    ft_result = ft_memchr(s, 'z', sizeof(s));
    real_result = memchr(s, 'z', sizeof(s));
    printf("2. Address: %p | %p\n", ft_result, real_result);

    ft_result = ft_memchr(s, '\0', sizeof(s));
    real_result = memchr(s, '\0', sizeof(s));
    printf("3. Address: %p | %p\n", ft_result, real_result);
    printf("   String:  %s | %s\n",
        (char *)ft_result, (char *)real_result);

    ft_result = ft_memchr(s, 'l', 0);
    real_result = memchr(s, 'l', 0);
    printf("4. Zero bytes: %p | %p\n", ft_result, real_result);

    ft_result = ft_memchr(s, 'l', 1);
    real_result = memchr(s, 'l', 1);
    printf("5. One byte:  %p | %p\n", ft_result, real_result);

    // INTEGER ARRAY TESTS 
    printf("\n=== INTEGER ARRAY TESTS ===\n");

    ft_result = ft_memchr(numbers, 42, sizeof(numbers));
    real_result = memchr(numbers, 42, sizeof(numbers));
    printf("6. Address: %p | %p\n", ft_result, real_result);
    printf("   First byte: %d | %d\n",
        *(unsigned char *)ft_result,
        *(unsigned char *)real_result);

    ft_result = ft_memchr(numbers, 10, sizeof(numbers));
    real_result = memchr(numbers, 10, sizeof(numbers));
    printf("7. Address: %p | %p\n", ft_result, real_result);
    printf("   First byte: %d | %d\n",
        *(unsigned char *)ft_result,
        *(unsigned char *)real_result);

    return (0);
}
 */
