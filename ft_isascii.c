/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:34:26 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/13 13:34:27 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

/* #include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\t | %c\n", ft_isascii('0'), '0');
	printf("%d\n", ft_isascii('a'));
	printf("%d\t | %c\n", isascii('0'), '0');
	printf("%d\n", isascii('a'));
	return (0);
} */