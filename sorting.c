/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:43:42 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/08 19:17:07 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_min_value(t_list **lst, t_list **lst_b)
{
	t_list	*current;
	t_list	*temp;
	t_list	*min_node;

	if (!(*lst) || !lst || !lst_b)
		return ;
	min_node = (*lst);
	current = (*lst)->next;
	while (current!=(*lst))
	{
		if(min_node->i > current->i)
			min_node = current;
		current = current->next;
	}
	while (*lst != min_node)
	{
		ra(lst);
	}
	pb(lst, lst_b);
}

// void	push_min_to_b(t_list **lst_a, t_list **lst_b)
// {
// 	t_list	*min;
// 	// t_list	*current;

// 	min = get_min_value(lst_a, );
// 	// printf("min = %d\n", min->i);
// 	// while ((*lst_a))
// 	// {
// 	// 	if ((*lst_a) == min)
// 	// 		break ;
// 	// 	ra(lst_a);
// 	// 	(*lst_a) = (*lst_a)->next;
// 	// }
// 	// pb(lst_a, lst_b);
// }


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
	if (!lst)
		return ;
	sa(lst);
}

void sort_3(t_list **lst)
{
	int	a;
	int	b;
	int	c;

	if (!lst || (*lst))
		return ;
	a = (*lst)->i;
	b = (*lst)->next->i;
	c = (*lst)->previous->i;
	if (is_a_sorted((*lst)))
		return;
	else if (c < a && a < b) // a-b-c c<a<b
		rra(lst);
	else if (b < a && a < c) // a-b-c B<A<C
		sa(lst);
	else if ( a < c && c < b) //a-b-c A<C<B
	{
		rra(lst); // c-a-b
		sa(lst); // a-c-b		
	}
	else if ( b < c && c < a) // a-b-c B<C<A
		ra(lst);
	else if (c < b && b < a) // C<B<A
	{
		ra(lst);//b-c-a
		sa(lst);//c-b-a
	}
	printf("OK");
	
}

void	sort_4(t_list **lst_a, t_list **lst_b)
{
	if (!lst_a || !(*lst_a) || !lst_b)
		return ;
	if (is_a_sorted(((*lst_a))))
		return;
	get_min_value(lst_a, lst_b);
	sort_3(lst_a);
	pa(lst_a, lst_b);
}

int	main(void)
{
	t_list *head = NULL;
	t_list *tete = NULL;	
	t_list *current;
	// t_list *current1;

	lst_add_back(&head, "9884");
	lst_add_back(&head, "777");
	lst_add_back(&head, "1");
	lst_add_back(&head, "88");
	sort_4(&head);
	// printf("sorted ? :%d\n", is_a_sorted(head));
	// sort_4(&head, &tete);
	// get_min_value(&head, &tete);
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
}