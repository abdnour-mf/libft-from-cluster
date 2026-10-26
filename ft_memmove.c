/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:52:40 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/14 14:03:00 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
 #include <string.h>

static void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dest = (char *)dst;
	const char *sorc = (const char *)src;
    size_t i;
    
    i = 0;
    while (i < n)
    {
        dest[i] = sorc[i];
        i++;
    }
    return (dst);
}

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest ; 
	dest = (char *)dst;
	char *sorc ; 
	sorc =(char *)src;
	
	if (dest > sorc)
	{
		while (len > 0)
		{
			len--;
			dest[len] = sorc[len];
		}
	}
	else
		ft_memcpy(dst, src, len);	
	return (dst);
}

int main()
{
	char str[] = "ABCDE";
	char *dst = str +1;
	ft_memmove(dst, str, 3);
	//memmove(dst, str, 3);

	printf("%s\n", dst);
	return (0);

	//SRC = ABCDE
	//DST = BCDE
}