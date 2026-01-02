/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 15:55:53 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/02 15:43:50 by hoel-har         ###   ########.fr       */
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
		sign = 44 - '-';
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
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
int	*ft_lst_last(t_list *lst)
{
	t_list	*temp;
	int		i;
	
	i = 0;
	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	lst_add_back(t_list **lst,char *number)
{
	t_list	*new;

	if (*lst == NULL)
	{
		(*lst) = (t_list *)malloc(sizeof(t_list));
		if (!lst)
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
		new-> i = ft_atoi(number);		
		new->next = ();
		ft_lst_last((*lst))-> next = new;
	}
}



