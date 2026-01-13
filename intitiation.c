/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intitiation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:51:25 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/13 14:35:01 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *s)
{
	int				i;
	long int		res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((s[i] > 8 && s[i] < 14) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - 48;
		i++;
	}
	return (res * sign);
}

int	created_linked_list(int ac, char **av, t_list **lst)
{
	int			i;
	long int	check;
	
	if (!lst)
		return (0);
	i = 1;
	while (i < ac)
	{
		check = ft_atol(av[i]);
		if ( check > INT_MAX || check < INT_MIN)
		{
			ft_lstclear(lst);
			return (0);
		}
		lst_add_back(lst, (int)check);
		i++;
	}
	return (1);
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
		if (ft_countwords(av[1], ' ') == 1)
			return (1);
		tab = ft_split(av[1], ' ');
		if (!created_linked_list(ac, tab, lst))
		{
			ft_lstclear(lst);
			return (write(2, "Error\n", 6), 0);
		}
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
