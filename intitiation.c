/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intitiation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:51:25 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/12 15:45:42 by hoel-har         ###   ########.fr       */
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

int	first_step(int ac, char **av, t_list **lst)
{
	char	**tab;

	if (ac < 2)
		return (write(2, "Error\n", 6), 1);
	if (ac == 2)
	{
		if (is_valid(av[1]) == 0)
			return (write(2, "Error\n", 6), 1);
		tab = ft_split(av[1], ' ');
		created_linked_list(ac, tab, lst);
		free_tab(tab);
	}
	else if (parsing(av) == 0)
		return (write(2, "Error\n", 6), 1);
	created_linked_list(ac, av, lst);
	if (check_double(lst))
	{
		ft_lstclear(lst);
		return (write(2, "Error\n", 6), 0);
	}
	return (1);
}
