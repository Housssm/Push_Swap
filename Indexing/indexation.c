/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 15:55:53 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/13 15:01:10 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_index(t_list **lst)
{
	t_list	*current;
	int		j;

	if ( !lst || !(*lst))
		return ;
	current = (*lst);
	ft_lst_sorted(current);
	j = 1;
	(*lst)->index = 0;
	current = (*lst)->next;
	while (current != (*lst))
	{
		current->index = j;
		j++;
		current = current->next;
	}
	(*lst) = current;
}

int	find_index_max(t_list **sorted)
{
	t_list	*current;
	int		index_max;

	if ( !sorted || !(*sorted))
		return (0);
	index_max = 0;
	current = *sorted;
	index_max = current->index;
	current = current->next;
	while (current != (*sorted))
	{
		if (current->index > index_max)
			index_max = current->index;
		current = current->next;
	}
	return (index_max);
}

int	find_lst_index(t_list **sorted, int idx)
{
	t_list	*current;

	if ( !sorted || !(*sorted))
		return (0);
	current = (*sorted);
	if (current->index == idx)
		return (current->i);
	else
		current = current->next;
	while (current != *sorted)
	{
		if (current->index == idx)
			return (current->i);
		current = current->next;
	}
	return (0);
}

void	find_lst_int(t_list **original, int value, int idx)
{
	t_list	*current;

	if ( !original || !(*original))
		return ;
	current = (*original);
	if (current->i == value)
		current->index = idx;
	else
		current = current->next;
	while (current != *original)
	{
		if (current->i == value)
			current->index = idx;
		current = current->next;
	}
}

void	index_attributition(t_list **or, t_list **sorted)
{
	int		value_to_find;
	int		i;
	int		index_max;

	if ( !or || !(*or) || !sorted || !(*sorted))
		return ;
	i = 0;
	value_to_find = 0;
	index_max = find_index_max(sorted);
	while (i <= index_max)
	{
		value_to_find = find_lst_index(sorted, i);
		find_lst_int(or, value_to_find, i);
		i++;
	}
}

/*int	main(void)
{
	t_list *head = NULL;
	t_list *tete;	
	t_list *current;
	t_list *current1;


	tete = lst_copy(&head);
	ft_index(&head);
	index_attributition(&tete,&head);
	if (tete)
	{
		current = tete;
		printf("tete = %d, tete = %d\n", current->i, current->index);
		current = tete ->next;
		while (current != tete)
		{
			printf("tete = %d, tete = %d\n", current->i, current->index);
			current = current->next;
		}
	}
	return 0;
}*/