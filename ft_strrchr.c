/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:08:49 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/15 13:38:39 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t len;
    
    len = 0;
    while (*s)
    {
        s++;
        len++;
    }
    return (len);
}

char *ft_strrchr(const char *s, int c)
{
	int s_len;
	
	s_len = (int)ft_strlen(s);
	
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)&s[s_len]);
		s_len--;
	}
	
	return (NULL);
}

/* int main()
{
    /* char s[] = "momo w)dhdh";
    char c = 'o';
    
    printf("%s \t %s \n","%s\n", ft_strrchr(s,c)); 

	char *s = "libft-test-tokyo";
	printf("%s \t %s \n",ft_strrchr(s, 'l'), strrchr(s, 'l'));
    printf("%s \t %s \n",ft_strrchr(s, 'i'), strrchr(s, 'i'));
    printf("%s \t %s \n",ft_strrchr(s, 'b'), strrchr(s, 'b'));
    printf("%s \t %s \n",ft_strrchr(s, 'f'), strrchr(s, 'f'));
    printf("%s \t %s \n",ft_strrchr(s, 't'), strrchr(s, 't'));
    printf("%s \t %s \n",ft_strrchr(s, '-'), strrchr(s, '-'));
    printf("%s \t %s \n",ft_strrchr(s, 't'), strrchr(s, 't'));
    printf("%s \t %s \n",ft_strrchr(s, 'e'), strrchr(s, 'e'));
    printf("%s \t %s \n",ft_strrchr(s, 's'), strrchr(s, 's'));
    printf("%s \t %s \n",ft_strrchr(s, 't'), strrchr(s, 't'));
    printf("%s \t %s \n",ft_strrchr(s, '-'), strrchr(s, '-'));
    printf("%s \t %s \n",ft_strrchr(s, 't'), strrchr(s, 't'));
    printf("%s \t %s \n",ft_strrchr(s, 'o'), strrchr(s, 'o'));
    printf("%s \t %s \n",ft_strrchr(s, 'k'), strrchr(s, 'k'));
    printf("%s \t %s \n",ft_strrchr(s, 'y'), strrchr(s, 'y'));
    printf("%s \t %s \n",ft_strrchr(s, 'o'), strrchr(s, 'o'));
    printf("%s \t %s \n",ft_strrchr(s, '\0'), strrchr(s, '\0'));
    printf("%s \t %s \n",ft_strrchr(s, 'l' + 256), strrchr(s, 'l' + 256));
    printf("%s \t %s \n",ft_strrchr(s, 'i' + 256), strrchr(s, 'i' + 256));
    printf("%s \t %s \n",ft_strrchr(s, 'l' - 256), strrchr(s, 'l' - 256));
    printf("%s \t %s \n",ft_strrchr(s, 'i' - 256), strrchr(s, 'i' - 256));
	printf("%s \t %s \n",ft_strrchr(s, 'z'), strrchr(s, 'z'));
	printf("%s \t %s \n",ft_strrchr(s, '~'), strrchr(s, '~'));
    return 0;
} */