/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 19:37:46 by hoel-har          #+#    #+#             */
/*   Updated: 2025/12/31 19:38:50 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				i;
	struct s_list	*next;
	struct s_list	*previous;	
}t_list;

void	lst_add_back(t_list **lst,char *number);
t_list	*ft_lst_last(t_list *lst);
int		ft_atoi(char *s);



#endif