/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_rotate_.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 19:45:47 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/02 19:49:32 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **lst)
{
	if (!(*lst))
		return ;
	*lst = (*lst)->next;
	write(1, "ra\n", 3);
}

void	rb(t_list **lst)
{
	if (!(*lst))
		return ;
	*lst = (*lst)->next;
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
}



