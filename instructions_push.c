/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 19:44:34 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/02 19:50:15 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_head(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->next = (*lst);
		(*lst)->previous->next = new;
		new->previous = (*lst)->previous;
		(*lst)->previous = new;
	}
	else
	{
		new->next = new;
		new->previous = new;
	}
	*lst = new;
}

void	pa(t_list **a, t_list **b)
{
	t_list	*node;

	if (!a || !*a)
		return ;
	node = *a;
	if ((*a)->next == *a)
		*a = NULL;
	else
	{
		node->previous->next = node->next;
		node->next->previous = node->previous;
		*a = node->next;
	}
	put_head(b, node);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*node;

	if (!b || !*b)
		return ;
	node = *b;
	if ((*b)->next == *b)
		*b = NULL;
	else
	{
		node->previous->next = node->next;
		node->next->previous = node->previous;
		*b = node->next;
	}
	put_head(a, node);
	write(1, "pb\n", 3);
}
