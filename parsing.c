/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:45:30 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/11 19:50:48 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid(char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	parsing(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!is_valid(av[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_double(t_list **lst)
{
	t_list	*current;
	t_list	*temp;

	if (!lst || !(*lst))
		return (1);
	current = (*lst)->next;
	while (current != (*lst))
	{
		temp = current->next;
		while (temp != current)
		{
			if (current->i == temp->i)
			{
				write(2, "Error\n", 6);
				ft_lstclear(lst);
				return (1);
			}
			temp = temp->next;
		}	
		current = current->next;
	}
	return (0);
}
