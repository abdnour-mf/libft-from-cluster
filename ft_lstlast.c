/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:46:34 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/29 21:46:43 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    //we check till the we find that a node is pointing to NULL
    while (lst->next)
        lst = lst->next;
    return (lst);
}