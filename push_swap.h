#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
    int				i;
	struct s_list	*next;
}t_list;

void	lst_add_back(t_list **lst,char *number);


#endif