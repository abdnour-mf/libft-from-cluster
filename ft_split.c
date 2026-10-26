/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:54:26 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/20 16:58:09 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t counter (char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while(s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}



char **ft_split(char const *s, char c)
{
	char **result;
	size_t i;
	size_t j;
	size_t start;
	size_t len;
	
	
	i = 0;
	j = 0;
	result = ft_calloc((counter(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	while(s[i])
	{
		if (s[i] != c)
		{
			len = 0;
			start = i;
			while (s[i] != c && s[i])
			{	
				len++;
				i++;
			}
		}
		result [j] = ft_substr(s, start, len);
		j++;
		i++;
	}
	result[j] = NULL;
	return (result);
}

int main(void)
{
    char **result;

    result = ft_split("hello world", ' ');
    printf("%s\n", result[0]);
    printf("%s\n", result[1]);
    printf("%p\n", (void *)result[2]);
    free(result[0]);
    free(result[1]);
    free(result);
    return (0);
}

/* int main()
{
	printf("%lu\n", counter("  hh hshs hs hxhs hs ", ' '));
	printf("%lu\n", counter(" ", ' '));
	printf("%lu\n", counter("", ' '));
	printf("%lu\n", counter("hello wrold", ' '));
	return (0);
} */