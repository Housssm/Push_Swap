/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intitiation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:51:25 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/12 12:09:04 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	created_linked_list(int ac, char **av, t_list **lst)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (i < ac)
	{
		if (av[i][0] == ' ')
			i++;
		if (av[i][0] != ' ')
		{
			result = ft_atoi((av[i]));
			lst_add_back(lst, result);
		}
		i++;
	}
}

void	first_step(int ac, char **av, t_list **lst)
{
	char	**tab;

	if ( ac < 2)
	{
		write(2, "Error\n", 6);
		return ;
	}
	if ( ac == 2)
	{
		if (is_valid(av[1]) == 0)
		{
			write(2, "Error\n", 6);
			return ;
		}
		tab = ft_split(av[1], ' ');
		created_linked_list(ac, tab, lst);
		free_tab(tab);
	}
	else if (parsing(av) == 0)
	{
		write(2, "Error\n", 6);
		return ;
	}
	created_linked_list(ac, av, lst);
	if (check_double(lst))
		return ;
	// ft_lstclear(&head);
}
