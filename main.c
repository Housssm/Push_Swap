/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 20:34:54 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/12 15:48:09 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Modifier 	-
// 			-lst->i en lst->value
// 			- modifier les fonctions instruction pour ne pas avoir de repetitions
			

#include "push_swap.h"



int	main(int ac, char **av)
{

	t_list *head = NULL;
	t_list *to_sort = NULL;	
	if (!first_step(ac, av,&head ))
		return (0);
	to_sort = lst_copy(&head);
	ft_index(&to_sort);
	index_attributition(&head,&to_sort);
	ft_lstclear(&to_sort);
	ft_lstclear(&head);
	// if (head)
	// {
	// 	current = head;
	// 	printf("head = %d, head = %d\n", current->i, current->index);
	// 	current = head ->next;
	// 	while (current != head)
	// 	{
	// 		printf("head = %d, head = %d\n", current->i, current->index);
	// 		current = current->next;
	// 	}	
	return(0);
}

