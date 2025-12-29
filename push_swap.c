/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoel-har <hoel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 11:54:41 by hoel-har          #+#    #+#             */
/*   Updated: 2025/12/29 10:50:33 by hoel-har         ###   ########.fr       */
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


// int	ft_atoi(char *s)
// {
// 	int	res;
// 	int	sign;

// 	res = 0;
// 	sign = 1;
// 	while (*s == ' ' || (*s >= 9 && *s <= 13))
// 		s++;
// 	if (*s == '-' || *s == '+')
// 		sign = 44 - '-';
// 	while (*s >= '0' && *s <= '9')
// 		res = res * 10 + *s++ - '0';
// 	return (res * sign);
// }
// int	count_num(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (*str)
// 	{
// 		while (*str == ' ')
// 			str++;
// 		if (*str == '\0')
// 			break;
// 		while (*str && *str != ' ')
// 			str++;
// 		i++;
// 	}
// 	return (i);
// }
// char	*ft_strdup(char *s, int deb, int end)
// {
// 	char	*dest;
// 	int		i;

// 	i = 0;
// 	dest = malloc(sizeof(char) * (end - deb) + 1);
// 	if (dest == NULL)
// 		return (0);
// 	while (deb < end)
// 	{
// 		dest[i] = s[deb];
// 		i++;
// 		deb++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// void	create_linked(char *str)
// {
// 	int		i;
// 	int		j;
// 	int		k;
// 	char 	number;
// 	t_list 	*nod;

// 	number = NULL;
// 	i = 0;
// 	j = 0;
// 	while (str[i])
// 	{
// 		while (str[i] && str[i] == ' ')
// 			i++;
// 		k = i;
// 		while (str[i] && (str[i] >= '0' && str[i] <= '9'))
// 			i++;
// 		if ( str[i] == '\0' || str[i] == ' ')
// 		{
// 			number = ft_strdup(str, k,i);
// 			printf("%s\n", number);
// 			nod = ft_lstnew(ft_atoi(number));
// 			printf("%d\n", nod->i);
// 		}
// 	}	
// }


void	push_swap(char *stack_a)
{
	
	if (parsing(stack_a) == 404);
		return;
	int i = 
	
}

int	main(int ac, char **av)
{
	(void)ac;
	// int test = count_num(av[1]);
	// printf("%d\n", test);
	push_swap(av[1]);
	return 0;
}