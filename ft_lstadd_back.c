/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:44:18 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/29 21:44:35 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;
	
	if (!lst || !new)
		return;
	if (!*lst)
	{
	//if the list is empty then make the head point directly on new
		*lst = new;
		return;
	}
	tmp = *lst;
	while(tmp->next)
		tmp = tmp->next;
	new->next = NULL;
	tmp->next =	new;
}