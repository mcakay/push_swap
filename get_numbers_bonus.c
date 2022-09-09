/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numbers_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:45:20 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 12:45:46 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_numbers(t_stack **root, long num)
{
	t_stack	*curr;

	curr = *root;
	if (num > 2147483647 || num < -2147483648)
		ft_error();
	while (curr)
	{
		if (curr->number == num)
			return (1);
			curr = curr->next;
	}
	return (0);
}

static void	ft_get_number(long num, t_stack **root)
{
	if (!check_numbers(root, num))
		ft_add_node(root, num, 0);
	else
		ft_error();
}

void	ft_get_numbers(int argc, char **argv, t_stack **root)
{
	char	**strs;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		strs = ft_split(*(argv + i), ' ');
		j = 0;
		while (*(strs + j))
		{
			ft_get_number(ft_atol(*(strs + j)), root);
			j++;
		}
		ft_deallocate(strs);
		i++;
	}
}