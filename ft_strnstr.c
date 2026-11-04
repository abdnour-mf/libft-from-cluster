/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:35:53 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/30 19:42:24 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (sub[i] == '\0')
		return ((char *)str);
	while (i < len && str[i])
	{
		j = 0;
		while (sub[j] && j < len - i && str[i + j] == sub[j])
			j++;
		if (sub[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
