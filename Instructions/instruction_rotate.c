/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 19:45:47 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/13 20:07:40 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_original(t_list **lst)
{
	if (!(*lst))
		return ;
	*lst = (*lst)->next;
}

void	ra(t_list **lst)
{
	r_original(lst);
	write(1, "ra\n", 3);	
}

void	rb(t_list **lst)
{
	r_original(lst);
	write(1, "rb\n", 3);	
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
}
