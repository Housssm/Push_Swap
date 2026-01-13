/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 09:20:23 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/13 20:48:45 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	lst_size(t_list *lst)
{
	t_list	*current;
	int		size;

	size = 0;
	current = lst->next;
	size += 1;
	while (current != lst)
	{
		current = current->next;
		size += 1;
	}
	return (size);
}

int	size_bits(int nb)
{
	int	bits;

	bits = 0;
	while (nb > 0)
	{
		nb >>= 1;
		bits++;
	}
	return (bits);
}

void	final_sort(t_list **a, t_list **b)
{
	int	max_num;
	int	max_bits;
	int	i;
	int	size;

	if (!a || !(*a) || !b)
		return ;
	i = 0;
	max_num = lst_size(*a) - 1;
	max_bits = size_bits(max_num);
	while (i < max_bits)
	{
		size = lst_size(*a);
		while (size--)
		{
			if (((*a)->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
		}
		while (*b)
			pa(a, b);
		i++;
	}
}

void	sort_stack(t_list **a, t_list **b)
{
	int	size;

	if (!a || !(*a) || !b)
		return ;
	size = lst_size(*a);
	if (!is_a_sorted(*a) && size <= 5)
		sort_small(a, b);
	else if (!is_a_sorted(*a))
		final_sort(a, b);
	else
	{
		ft_lstclear(a);
		ft_lstclear(b);
	}
}
