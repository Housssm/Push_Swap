/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 20:34:54 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/13 18:15:52 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Modifier 	-
// 			-lst->i en lst->value
// 			- modifier les fonctions instruction pour ne pas avoir de repetitions
			

#include "push_swap.h"

int	size_bits(int nb)
{
	int	bits;
	
	bits = 0;
	while ( nb > 0)
	{
		nb >>= 1;
		bits++;
	}
	return (bits);
}

void	final_sort(t_list **a, t_list **b)
{
	int	max_num;
	int max_bits;
	int	i;
	int j;

	if ( !a || !(*a) || !b || !(*b))
		return ;
	i = 0;
	max_num = lst_size(*a) - 1;
	max_bits = size_bits(max_num);
	while (i < max_bits)
	{
		j = 0;
		while (j < max_bits)
		{
			if ( ((*a)->index >> i) & 1 )
				ra(a);
			else
			pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}

void	sort_stack(t_list **a, t_list **b)
{
	int	size;

	if ( !a || !(*a) || !b )
		return ;		
	size = lst_size(*a);
	if ( !is_a_sorted(*a) && size <= 5)
		sort_small(a, b);	
	else if (!is_a_sorted(*a)) 
		final_sort(a,b);
	else
	{
		ft_lstclear(a);
		ft_lstclear(b);
	}
}


int	main(int ac, char **av)
{

	t_list *a;
	t_list *b;
	t_list *to_sort;

	a = NULL;
	b = NULL;
	to_sort= NULL;
	if (ac <= 1)
		return (write(2, "Error\n", 6), 0);
	if (!first_step(ac, av,&a ))
		return (0);
	to_sort = lst_copy(&a);
	ft_index(&to_sort);
	index_attributition(&a,&to_sort);
	sort_stack(&a, &b);
	ft_lstclear(&to_sort);
	ft_lstclear(&a);	

	// t_list *current = NULL;
	// int i = 0;
	// current = a;
	// printf("%d\n", current->i);
	// current = current->next;
	// while (i < ac - 1)
	// {
	// 	printf("%d\n", current->i);
	// 	current = current ->next;
	// 	i++;
	// }
	
	return(0);

}
