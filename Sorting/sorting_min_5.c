/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_min_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:43:42 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/13 18:25:01 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_a_sorted(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (0);
	temp = lst->next;
	if (lst->i > lst->next->i)
		return (0);
	while (temp != lst)
	{
		if ((temp->previous->i) > (temp->i))
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	sort_2(t_list **lst)
{
	if (!lst || is_a_sorted((*lst)))
		return ;
	sa(lst);
}

void	sort_3(t_list **lst)
{
	int	a;
	int	b;
	int	c;

	if (!lst || !(*lst) || is_a_sorted((*lst)))
		return ;
	a = (*lst)->i;
	b = (*lst)->next->i;
	c = (*lst)->previous->i;
	if (c < a && a < b)
		rra(lst);
	else if (b < a && a < c)
		sa(lst);
	else if (a < c && c < b)
	{
		rra(lst);
		sa(lst);
	}
	else if (b < c && c < a)
		ra(lst);
	else if (c < b && b < a)
	{
		sa(lst);
		rra(lst);
	}	
}

void	sort_4(t_list **lst_a, t_list **lst_b)
{
	if (!lst_a || !(*lst_a) || !lst_b)
		return ;
	if (is_a_sorted(((*lst_a))))
		return ;
	get_min_value(lst_a, lst_b);
	sort_3(lst_a);
	pa(lst_a, lst_b);
}

void	sort_5(t_list **lst_a, t_list **lst_b)
{
	if (!lst_a || !(*lst_a) || !lst_b)
		return ;
	if (is_a_sorted(((*lst_a))))
		return ;
	get_min_value(lst_a, lst_b);
	get_min_value(lst_a, lst_b);
	sort_3(lst_a);
	pa(lst_a, lst_b);
	pa(lst_a, lst_b);
}

/* int	main(void)
{
	t_list *head = NULL;
	t_list *tete = NULL;	
	t_list *current;
	// t_list *current1;

	sort_5(&head, &tete);
	printf("-------    HEAD   -------------\n");
	if (head)
	{
		current = head;
		printf("head = %d\n", current->i);
		current = head ->next;
		while (current != head)
		{
			printf("head = %d\n", current->i);
			current = current->next;
		}
	}
	printf("-------    TETE   -------------\n");
	
	if (tete)
	{
		current = tete;
		printf("tete = %d\n", current->i);
		current = tete ->next;
		while (current != tete)
		{
			printf("tete = %d\n", current->i);
			current = current->next;
		}
	}
	return 0;
} */