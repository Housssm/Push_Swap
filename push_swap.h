/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 19:37:46 by hoel-har          #+#    #+#             */
/*   Updated: 2026/01/02 19:56:02 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

// Linked list structure
typedef struct s_list
{
	int				i;
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


//Utils
void	lst_add_back(t_list **lst, char *number);
int		ft_lst_size(t_list *lst);
t_list	*ft_lst_last(t_list *lst);
int		ft_atoi(char *s);


#endif