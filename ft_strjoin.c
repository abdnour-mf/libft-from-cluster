/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:15:56 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/29 21:56:39 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i;
    size_t len;
      
    if (!s1 || !s2)
        return (NULL);
    i = 0;
    len = ft_strlen(s1) + ft_strlen(s2);
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
        i = 0;
    while (s2[i])
    {
        str[ft_strlen(s1) + i] = s2[i];
        i++;
    }
    str[len] = '\0';
    return (str);
}
