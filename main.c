/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 20:34:54 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/10 00:09:28 by hoel-har         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	t_list	*head;
	t_list	*current;
	
	current = NULL;
	head = NULL;
	if ( ac < 2)
		{
			write(2, "Error\n", 6);
			return (0);
		}

	if (parsing(av) == 0)
	{
		write(2, "Error\n", 6);
		return(0);
	}
	created_linked_list(ac, av, &head);
	
	current = head->next;
	printf("%d\n", head->i);
	while (current != head)
	{
		printf("%d\n", current->i);
		current = current->next;
	}
	return(0);
}
