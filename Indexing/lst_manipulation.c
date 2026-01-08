/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manipulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:45:43 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/08 13:39:25 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*lst_copy(t_list **lst)
{
	t_list	*current;
	t_list	*new;

	new = NULL;
	current = (*lst);
	lst_add_back_int(&new, current->i);
	current = current->next;
	while (current != (*lst))
	{
		lst_add_back_int(&new, current->i);
		current = current->next;
	}
	return (new);
}

void	lst_swap(t_list *a, t_list *b)
{
	int	temp;

	temp = a->i;
	a->i = b->i;
	b->i = temp;
}

void	lst_add_back(t_list **lst, char *number)
{
	t_list	*new;
	t_list	*last;

	if (*lst == NULL)
	{
		(*lst) = (t_list *)malloc(sizeof(t_list));
		if (!(*lst))
			return ;
		(*lst)->i = ft_atoi(number);
		(*lst)->next = (*lst);
		(*lst)->previous = (*lst);
	}
	else
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return ;
		last = (*lst)->previous;
		new->i = ft_atoi(number);
		new->next = (*lst);
		new->previous = last;
		last->next = new;
		(*lst)->previous = new;
	}
}

void	lst_add_back_int(t_list **lst, int number)
{
	t_list	*new;
	t_list	*last;

	if (*lst == NULL)
	{
		(*lst) = (t_list *)malloc(sizeof(t_list));
		if (!(*lst))
			return ;
		(*lst)->i = number;
		(*lst)->next = (*lst);
		(*lst)->previous = (*lst);
	}
	else
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return ;
		last = (*lst)->previous;
		new->i = number;
		new->next = (*lst);
		new->previous = last;
		last->next = new;
		(*lst)->previous = new;
	}
}

void	ft_lst_sorted(t_list *lst)
{
	t_list	*current;
	int		sorted;

	if (!lst)
		return ;
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		current = (lst)->next;
		while (current != (lst))
		{
			if ((current->i) < (current->previous->i))
			{
				lst_swap(current, current->previous);
				sorted = 0;
			}
			current = current->next;
		}	
		if ((current->i) < ((lst)->i))
		{
			lst_swap(current, (lst));
			sorted = 0;
		}
	}
}
