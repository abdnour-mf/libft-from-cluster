/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:18:52 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/19 14:23:16 by amfarrej         ###   ########.fr       */
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

char *ft_strdup(const char *s1)
{
	char *copy;
	size_t i;
	
	i = 0;
	if(!(copy = malloc(ft_strlen(s1) + 1)))
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* int	main(void)
{
	char	original[] = "Hello world";
	char	*ft;
	char	*real;

	ft = ft_strdup(original);
	real = strdup(original);

	 1. Compare copied content 
	printf("Content: ft: %s | real: %s\n", ft, real);
	printf("Content match: ft: %d | real: %d\n",
		ft && strcmp(ft, original) == 0,
		real && strcmp(real, original) == 0);

	 2. Compare addresses 
	printf("Original address: %p\n", (void *)original);
	printf("ft_strdup address: %p\n", (void *)ft);
	printf("strdup address:    %p\n", (void *)real);

	free(ft);
	free(real);
	return (0);
} */