/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amfarrej <amfarrej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:04:14 by amfarrej          #+#    #+#             */
/*   Updated: 2026/11/04 23:07:36 by amfarrej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	len;

	if (!lst)
		return (0);
	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

/* #include <stdio.h>
int main()
{
	t_list *node1;
	t_list *node2;
	t_list *node3;
	
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	if (!node1 || !node2 || !node3)
		return (1);
	int nbr = 42;
	node1->content = &nbr;
	node2->content = "to";
	node3->content = "you";
	
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	
	printf("%d\n",*(int *)(node1->content));
} */