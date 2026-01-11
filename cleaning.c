/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaning.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 19:43:54 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/11 19:47:29 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{	
		free(tab[i]);
		i++;
	}
	free (tab);
}

void	ft_lstdelone(t_list *lst)
{
	if (lst)
	{
		free(lst);
	}
}

void	ft_lstclear(t_list **lst)
{
	t_list	*current;
	t_list	*next;
	t_list	*head;

	if (! lst || !*lst)
		return ;
	head = *lst;
	if (head->previous)
	{
		head->previous->next = NULL;
		head->previous = NULL;
	}
	current = head;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current);
		current = next;
	}
	*lst = NULL;
}
