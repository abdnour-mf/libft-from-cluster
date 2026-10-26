/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:34:19 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/13 13:34:20 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\n", ft_isprint('0'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", isprint('0'));
	printf("%d\n", isprint('a'));
	return (0);
} */