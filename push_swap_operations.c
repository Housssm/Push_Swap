/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 15:55:53 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/06 18:27:17 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (!lst)
		return (0);
	return (lst->previous);
}

// int	ft_lst_size(t_list *lst)
// {
// 	t_list	*current;
// 	int		i;

// 	i = 0;
// 	if (!lst)
// 		return (0);
// 	current = lst;
// 	i++;
// 	while (current->next != lst)
// 	{
// 		current = current->next;
// 		i++;
// 	}
// 	return (i);
// }

void	lst_add_back(t_list **lst, char *number)
{
	t_list	*new;
	t_list	*last;

	if (*lst == NULL)
	{
		(*lst) = (t_list *)malloc(sizeof(t_list));
		if (!(*lst))
			return ;
		(*lst)->i = ft_atoi(number);
		(*lst)->next = (*lst);
		(*lst)->previous = (*lst);
	}
	else
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return ;
		last = (*lst)->previous;
		new->i = ft_atoi(number);
		new->next = (*lst);
		new->previous = last;
		last->next = new;
		(*lst)->previous = new;
	}
}

void	lst_add_back_int(t_list **lst, int number)
{
	t_list	*new;
	t_list	*last;

	if (*lst == NULL)
	{
		(*lst) = (t_list *)malloc(sizeof(t_list));
		if (!(*lst))
			return ;
		(*lst)->i = number;
		(*lst)->next = (*lst);
		(*lst)->previous = (*lst);
	}
	else
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return ;
		last = (*lst)->previous;
		new->i = number;
		new->next = (*lst);
		new->previous = last;
		last->next = new;
		(*lst)->previous = new;
	}
}

t_list	*lst_copy(t_list **lst)
{
	t_list	*current;
	t_list	*new;

	new = NULL;
	current = (*lst);
	lst_add_back_int(&new, current->i);
	current = current->next;
	while (current != (*lst))
	{
		lst_add_back_int(&new, current->i);
		current = current->next;
	}
	return(new);
}

void	lst_swap(t_list *a, t_list *b)
{
	int	temp;
	
	temp = a->i;
	a->i = b->i;
	b->i = temp;
}

void	ft_lst_sorted(t_list *lst)
{
	t_list	*current;
	int		sorted;
	
	if (!lst )
		return;
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		current = (lst)->next;
		while (current != (lst))
		{
			if ( (current->i) < (current->previous->i))
			{
				lst_swap(current, current->previous);
				sorted = 0;
			}
			current = current->next;
		}	
		if ( (current->i) < ((lst)->i))
		{
			lst_swap(current, (lst));
			sorted = 0;
		}
	}
}

void	ft_index(t_list **lst)
{
	t_list *current;
	int		j;
	
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
	(*lst)= current;
}

int	main(void)
{
	t_list *head = NULL;
	t_list *tete;	
	t_list *current;
	t_list *current1;

	lst_add_back(&head, "988");
	lst_add_back(&head, "-29");
	lst_add_back(&head, "37");
	lst_add_back(&head, "1");
	lst_add_back(&head, "8402");
	lst_add_back(&head, "803");
	lst_add_back(&head, "404");
	lst_add_back(&head, "405");
	lst_add_back(&head, "406");
	lst_add_back(&head, "804");
	lst_add_back(&head, "4900");

	tete = lst_copy(&head);
	current1 = tete;
	printf("%d\n", current1->i);
	current1 = current1->next;
	while(current1 != tete)
	{
		printf("%d\n", current1->i);
		current1 = current1->next;
	}
	//ft_index(&head);
	// if (head)
	// {
	// 	current = head;
	// 	printf("head = %d, tete = %d\n", current->i, current->index);
	// 	current = head ->next;
	// 	while (current != head)
	// 	{
	// 		printf("head = %d, tete = %d\n", current->i, current->index);
	// 		current = current->next;
	// 	}
	// }
	// printf("int = %d, index = %d\n", head->next->i, head->next->index);
	
	return 0;
}


// int	main(void)
// {

// 	char *tab = "9,8,7,5";
// 	int i = 0;
// 	t_list *node;
// 	lst_add_back(&node, "9");
// 	// lst_add_back(&node, "8");
// 	// lst_add_back(&node, "40");
// 	// lst_add_back(&node, "0");

// 	// ft_lst_sorted(&node);
// 	// int j= 0;
// 	// t_list *head;
// 	// head = node;
// 	// printf("%d\n", head->i);
// 	// head = head->next;
// 	// while (head != node)
// 	// {
// 	// 	printf("%d\n", head->i);
// 	// 	head = head->next;
// 	// }
// 	return 0;
	
// }