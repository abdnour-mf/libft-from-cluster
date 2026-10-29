/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:33:16 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/29 21:49:19 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;
	size_t i = 0;
	
	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if(size == dst_len)
		return (size + src_len);
	while ((i + dst_len) < size - 1 && src[i])
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}


/* #include <string.h>
int main()
{
	char dst[20] = "hello";
	char src[] = " world";
	
	printf("Return: %zu\n", ft_strlcat(dst, src, 0));
	printf("String: %s\n", dst);
} */