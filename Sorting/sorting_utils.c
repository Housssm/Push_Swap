/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:38:25 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/13 17:51:42 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_min_value(t_list **lst, t_list **lst_b)
{
	t_list	*current;
	t_list	*min_node;

	if (!(*lst) || !lst || !lst_b)
		return ;
	min_node = (*lst);
	current = (*lst)->next;
	while (current != (*lst))
	{
		if (min_node->i > current->i)
			min_node = current;
		current = current->next;
	}
	while (*lst != min_node)
	{
		ra(lst);
	}
	pb(lst, lst_b);
}

void	get_max_value(t_list **lst, t_list **lst_b)
{
	t_list	*current;
	t_list	*max_node;

	if (!(*lst) || !lst || !lst_b)
		return ;
	max_node = (*lst);
	current = (*lst)->next;
	while (current != (*lst))
	{
		if (max_node->i < current->i)
			max_node = current;
		current = current->next;
	}
	while (*lst != max_node)
		ra(lst);
	pb(lst, lst_b);
}

void	sort_small(t_list **a, t_list **b)
{
	int	size;
	size = lst_size(*a);
	if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else if (size == 5)
		sort_5(a, b);
}



