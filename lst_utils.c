/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 09:20:23 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/12 09:23:26 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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