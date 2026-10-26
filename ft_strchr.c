/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:39:10 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/17 18:42:23 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while(s[i])
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if (s[i] == (char)c)
        return ((char *)&s[i]);
	return (NULL);
}

// check if we need to cast into unsigned char

// int main()
// {
//     char s[] = "momo w)dhdh";
//     char c = 'o';
    
//     printf("%s\n", ft_strchr(s,c)); 

// 	char *s = "libft-test-tokyo";
    
// 	/* 1 */ printf("%s,\t %s\n",ft_strchr(s, 'l'), strchr(s, 'l'));
// 	/* 2 */ printf("%s,\t %s\n",ft_strchr(s, 'i'), strchr(s, 'i'));
// 	/* 3 */ printf("%s,\t %s\n",ft_strchr(s, 'b'), strchr(s, 'b'));
// 	/* 4 */ printf("%s,\t %s\n",ft_strchr(s, 'f'), strchr(s, 'f'));
// 	/* 5 */ printf("%s,\t %s\n",ft_strchr(s, 't'), strchr(s, 't'));
// 	/* 6 */ printf("%s,\t %s\n",ft_strchr(s, '-'), strchr(s, '-'));
// 	/* 7 */ printf("%s,\t %s\n",ft_strchr(s, 't'), strchr(s, 't'));
// 	/* 8 */ printf("%s,\t %s\n",ft_strchr(s, 'e'), strchr(s, 'e'));
// 	/* 9 */ printf("%s,\t %s\n",ft_strchr(s, 's'), strchr(s, 's'));
// 	/* 10 */ printf("%s,\t %s\n",ft_strchr(s, 't'), strchr(s, 't'));
// 	/* 11 */ printf("%s,\t %s\n",ft_strchr(s, '-'), strchr(s, '-'));
// 	/* 12 */ printf("%s,\t %s\n",ft_strchr(s, 't'), strchr(s, 't'));
// 	/* 13 */ printf("%s,\t %s\n",ft_strchr(s, 'o'), strchr(s, 'o'));
// 	/* 14 */ printf("%s,\t %s\n",ft_strchr(s, 'k'), strchr(s, 'k'));
// 	/* 15 */ printf("%s,\t %s\n",ft_strchr(s, 'y'), strchr(s, 'y'));
// 	/* 16 */ printf("%s,\t %s\n",ft_strchr(s, 'o'), strchr(s, 'o'));
// 	/* 17 */ printf("%s,\t %s\n",ft_strchr(s, '\0'), strchr(s, '\0'));
// 	/* 18 */ printf("%s,\t %s\n",ft_strchr(s, 'l' + 256), strchr(s, 'l' + 256));
// 	/* 19 */ printf("%s,\t %s\n",ft_strchr(s, 'i' + 256), strchr(s, 'i' + 256));
// 	/* 20 */ printf("%s,\t %s\n",ft_strchr(s, 'l' - 256), strchr(s, 'l' - 256));
// 	/* 21 */ printf("%s,\t %s\n",ft_strchr(s, 'i' - 256), strchr(s, 'i' - 256));
// 	/* 22 */ printf("%s,\t %s\n",ft_strchr(s, 'z'), strchr(s, 'z'));
// 	/* 23 */ printf("%s,\t %s\n",ft_strchr(s, '~'), strchr(s, '~'));
// 	return (0);
// }