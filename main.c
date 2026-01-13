/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 20:34:54 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/13 20:55:44 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_list	*to_sort;

	a = NULL;
	b = NULL;
	to_sort = NULL;
	if (ac <= 1)
		return (write(2, "Error\n", 6), 0);
	if (!first_step(ac, av, &a))
		return (0);
	to_sort = lst_copy(&a);
	ft_index(&to_sort);
	index_attributition(&a, &to_sort);
	sort_stack(&a, &b);
	ft_lstclear(&to_sort);
	ft_lstclear(&a);
	return (0);
}
