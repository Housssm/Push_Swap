/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 19:17:01 by hoel-har          #+#    #+#             */
/*   Updated: 2025/12/31 23:22:11 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
int	ft_atoi(char *s)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
		sign = 44 - *s++;
	while (*s >= '0' && *s <= '9')
		res = res * 10 + *s++ - '0';
	return (res * sign);
}

t_list	*ft_lst_last(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != lst)
		temp = temp->next;
	return (temp);
}

void	lst_add_back(t_list **lst,char *number)
{
	t_list	*new;
	t_list	*last;

	if (*lst == NULL)
	{
		(*lst) = (t_list *)malloc(sizeof(t_list));
		if (!(*lst))
			return;
		(*lst)->i = ft_atoi(number);
		(*lst)->next = (*lst);
		(*lst)->previous = (*lst);	
	}
	else 
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return;
		last = ft_lst_last((*lst));
		new-> i = ft_atoi(number);		
		new->next = (*lst);
		new->previous = last;
		last->next = new;
		(*lst)->previous = new;
	}
}




void	swap_a(t_list **lst)
{
	t_list	*l1;
	t_list	*l2;
	t_list	*l3;
	t_list	*last;
	
	if (!lst)
		return;
	last = ft_lst_last((*lst));
	l1 = (*lst);
	l2 = (*lst)->next;
	l3 = l2 ->next;
	
	l2->previous = last;
	l2->next = l1;
	last->next = l2;
	l3->previous = l1;
	l1->next = l3;	
}
void	swap_b(t_list **lst)
{
	t_list	*l1;
	t_list	*l2;
	t_list	*l3;
	t_list	*last;
	
	if (!lst)
		return;
	last = ft_lst_last((*lst));
	l1 = (*lst);
	l2 = (*lst)->next;
	l3 = l2 ->next;
	
	l2->previous = last;
	l2->next = l1;
	last->next = l2;
	l3->previous = l1;
	l1->next = l3;	
}

void	ss(t_list **lst1, t_list **lst2)
{
	swap_a(lst1);
	swap_a(lst2);
}

void	pa_a(t_list **a, t_list **b)
{
	t_list 	*l1_a;
	t_list 	*l1_b;
	t_list 	*lasta;
	t_list	*lastb;
	t_list	*tempa;
	t_list	*tempb;
	
	lasta = ft_lst_last(a);
	lastb = ft_lst_last(b);
	
	l1_a = *a;
	l1_b = *b;
	tempa = l1_a->next;
	tempb = l1_b->next; 

	l1_a->next = tempb;
	tempb->previous = l1_a;
	lastb->next = l1_a;
	l1_a->previous = lastb;

	l1_b->next = tempa;
	tempa->previous = l1_b;
	lasta->next = l1_b;
	l1_b->previous = lasta;	
}
int	main(void)
{
	t_list *head = NULL;
	t_list *tete = NULL;
	t_list *current;
	t_list *current1;

	lst_add_back(&head, "1");
	lst_add_back(&head, "2");
	lst_add_back(&head, "3");
	lst_add_back(&head, "4");
	lst_add_back(&tete, "10");
	lst_add_back(&tete, "20");
	lst_add_back(&tete, "30");
	lst_add_back(&tete, "40");
	ss(&head, &tete);
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
		printf("%d\n", tete->i);
		current1 = tete ->next;
		while (current1 != tete)
		{
			printf("%d\n", current1->i);
			current1 = current1->next;
		}
	}
	return 0;
}