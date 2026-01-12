/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 20:34:54 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/12 08:56:04 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Modifier 	-lst_add_back
// 			-lst->i en lst->value
// 			- modifier les fonctions instruction pour ne pas avoir de repetitions
			

#include "push_swap.h"



int	main(int ac, char **av)
{
	t_list	*head;
	t_list	*current;
	
	current = NULL;
	head = NULL;
	first_step(ac, av, &head);
	// if ( ac < 2)
	// {
	// 	write(2, "Error\n", 6);
	// 	return (0);
	// }
	// if ( ac == 2)
	// {
	
	// 	if (is_valid(av[1]) == 0)
	// 	{
	// 		write(2, "Error\n", 6);
	// 		return(0);
	// 	}
	// 	tab = ft_split(av[1], ' ');
	// 	created_linked_list(ac, tab, &head);
	// 	free_tab(tab);
	// }
	// else if (parsing(av) == 0)
	// {
	// 	write(2, "Error\n", 6);
	// 	return(0);
	// }
	// created_linked_list(ac, av, &head);
	// if (check_double(&head))
	// 	return (0);
	// ft_lstclear(&head);
	current = head->next;
	printf("%d\n", head->i);
	while (current != head)
	{
		printf("%d\n", current->i);
		current = current->next;
	}
	return(0);
}
