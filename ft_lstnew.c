/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:58:13 by amfarrej          #+#    #+#             */
/*   Updated: 2026/10/29 21:59:49 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int main()
{
	t_list *new = ft_lstnew("A");
	t_list *n = ft_lstnew("2");
	new->next = n;
	n->next = NULL;
	
	
	
	printf("%s\n", (char *)new->content);
} */