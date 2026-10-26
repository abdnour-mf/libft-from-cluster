/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:45:25 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/14 16:53:55 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}
/* #include <stdio.h>
#include <ctype.h>
int main()
{
    printf("%c\n", ft_toupper('a'));
    printf("%c\n", ft_toupper('B'));
    printf("%c\n", ft_toupper('7'));
    printf("%c\n", toupper('a'));
    printf("%c\n", toupper('B'));
    printf("%c\n", toupper('7'));
    printf("%c\n", ft_toupper('@'));
} */