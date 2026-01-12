/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 19:37:46 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/12 08:49:07 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <limits.h>



// Linked list structure
typedef struct s_list
{
	int				i;
	int				index;
	struct s_list	*next;
	struct s_list	*previous;
	
}t_list;

// Needed operations
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **lst1, t_list **lst2);
void	put_head(t_list **lst, t_list *new);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **lst);
void	rb(t_list **lst);
void	rr(t_list **a, t_list **b);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **a, t_list **b);

//  List Manipulation
t_list	*lst_copy(t_list **lst);
void	lst_swap(t_list *a, t_list *b);
void	lst_add_back(t_list **lst, int number);
void	lst_add_back_int(t_list **lst, int number);
void	ft_lst_sorted(t_list *lst);
void	ft_index(t_list **lst);
int		find_index_max(t_list **sorted);
int		find_lst_index(t_list **sorted, int idx);
void	find_lst_int(t_list **original, int value, int idx);
void	index_attributition(t_list **or, t_list **sorted);

// Sorting
void	get_min_value(t_list **lst, t_list **lst_b);
void	get_max_value(t_list **lst, t_list **lst_b);
int		is_a_sorted(t_list *lst);
void	sort_2(t_list **lst);
void	sort_3(t_list **lst);
void	sort_4(t_list **lst_a, t_list **lst_b);
void	sort_5(t_list **lst_a, t_list **lst_b);

// Cleaning
void	free_tab(char **tab);
void	ft_lstdelone(t_list *lst);
void	ft_lstclear(t_list **lst);

// Parsing
int		is_valid(char *str);
int		parsing(char **av);
int		check_double(t_list **lst);
void	first_step(int ac, char **av, t_list **lst);


#endif