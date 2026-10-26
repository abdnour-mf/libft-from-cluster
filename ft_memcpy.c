/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:19:45 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/14 12:50:21 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
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

/* #include <stdio.h>
#include <string.h>

int main()
{
    char *src = "hello" ;
    char dst[20] = "wawawawawaw";
    
    printf("%s\n", ft_memcpy(dst, src, 6));
    printf("%s\n", memcpy(dst, src, 6));

    int ds[] = {1337, 42, 10};
    int dd[3];
    
    ft_memcpy(dd, ds, sizeof(ds));
    printf("%d\n", ds[0]);
    printf("%d\n", ds[1]);
    printf("%d\n", ds[2]);
    
    return (0);
} */