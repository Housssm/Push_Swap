/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_rev_rot.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 19:17:01 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/13 20:09:39 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr_original(t_list **lst)
{
	if (!(*lst))
		return ;
	*lst = (*lst)->previous;
}
void	rra(t_list **lst)
{
	rr_original(lst);
	write(1, "rra\n", 4);
}

void	rrb(t_list **lst)
{
	rr_original(lst);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
}
/*int	main(void)
{
	t_list *head = NULL;
	t_list *tete = NULL;
	t_list *current;
	t_list *current1;

	ss(&head, &tete);
	//pa(&head, &tete);
	//sa(&head);
	// pb(&head, &tete);
	// rra(&head);
	if (head)
	{
		printf("%d\n", head->i);
		current = head ->next;
		while (current != head)
		{
			printf("%d\n", current->i);
			current = current->next;
		}
	}
	if (tete)
	{
		printf("\n%d\n", tete->i);
		current1 = tete ->next;
		while (current1 != tete)
		{
			printf("%d\n", current1->i);
			current1 = current1->next;
		}
	}
	return 0;
}*/