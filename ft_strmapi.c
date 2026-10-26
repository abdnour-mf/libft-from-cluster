/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:18:11 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/19 18:05:15 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *res;
	unsigned int i;

	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while(s[i])
	{
		res[i] = (*f)(i,s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

static char to_up(unsigned int i, char c)
{
	(void)i;
	if (c >= 'A' && c <= 'Z')
		return(c + 32);
	return (c);
}

/* int main()
{
	char *res = ft_strmapi("catHUIUG", to_up);
	printf("%s\n", res);
	return (0);
} */