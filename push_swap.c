/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 11:54:41 by hoel-har          #+#    #+#             */
/*   Updated: 2025/12/29 14:02:00 by hoel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*// GUIDLINE //

Instruction :   - Display shortest sequence of instruction needed to sort the stack with smallest number on top
                - Instruction separate by "/n"
                - No parameter specified program show nothing and return to the prompt
                - Error ? dispay "Error" followed by "\n"

Roadmap     :   - Radix ou turkish ?
				- Faire parsing (verifier que des int, respect les bons espaces...)
                - Si utilisation de radix conversion en chiffre
                - Coder toutes les push, swap, rotate et reverse rotate;
				- Count word pour savoir le nombre de mot, utiliser atoi pour convertir chaque mot en nb et attribuer valeur au noeud
                - 

*/
int	is_num(char s)
{
	if ((s <= '9' || s >= '0' || s == ' ' ))
		return (1);
	else
		return (0);
}

int	parsing(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_num(str[i]) || str[0] == ' ')
			return (404);
		else if ( str[i] == ' ' && str[i + 1] == ' ')
			return (404);
		else if (str[i] == ' ' && !is_num(str[i + 1]))
			return (404);
		i++;
	}
	if (str[i - 1] == ' ')
		return (404);
	return (10);
}



int	count_num(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str == '\0')
			break;
		while (*str && *str != ' ')
			str++;
		i++;
	}
	return (i);
}
char	*ft_strdup(char *s, int deb, int end)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (end - deb) + 1);
	if (!dest)
		return (0);
	while (deb <= end)
	{
		dest[i] = s[deb];
		i++;
		deb++;
	}
	dest[i] = '\0';
	return (dest);
}

void	create_linked(t_list **nod, char *str)
{
	int		i;
	int		k;
	char 	*number;

	number = NULL;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		k = i;
		while (str[i] && (str[i] != ' '))
			i++;
		number = ft_strdup(str, k,i);
	 	lst_add_back(nod, number);
		k = i;
	}	
}


void	push_swap(char *stack_a)
{
	t_list *head;

	head = NULL;
	if (parsing(stack_a) == 404)
		return; /*Doit retourner "ERROR"*/
	create_linked(&head, stack_a);
}

int	main(int ac, char **av)
{
	(void)ac;
	// int test = count_num(av[1]);
	// printf("%d\n", test);
	// t_list *head =push_swap(av[1]);
	// printf("%d ->\n", head->i);
	// while (head != NULL)
	// {
    //     printf("%d ->\n", head->i);
	// 	head = head->next;
	// }
	push_swap(av[1]);
	// printf("content = %d\n", head->i);
	return 0;
}