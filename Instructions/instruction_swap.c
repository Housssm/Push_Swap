/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_swap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 19:43:48 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/02 19:50:48 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **lst)
{
	t_list	*node;

	if (!lst || !(*lst) || (*lst)->next == *lst)
		return ;
	node = *lst;
	node->previous->next = node->next;
	node->next->previous = node->previous;
	*lst = node->next;
	node->next = (*lst)->next;
	node->previous = (*lst);
	(*lst)->next->previous = node;
	(*lst)->next = node;
	write(1, "sa\n", 3);
}

void	sb(t_list **lst)
{
	t_list	*node;

	if (!lst || !(*lst) || (*lst)->next == *lst)
		return ;
	node = *lst;
	node->previous->next = node->next;
	node->next->previous = node->previous;
	*lst = node->next;
	node->next = (*lst)->next;
	node->previous = (*lst);
	(*lst)->next->previous = node;
	(*lst)->next = node;
	write(1, "sb\n", 3);
}

void	ss(t_list **lst1, t_list **lst2)
{
	sa(lst1);
	sb(lst2);
}
