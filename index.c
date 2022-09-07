/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:12:19 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/07 19:15:26 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_find_min(t_stack **root)
{
	t_stack	*curr;
	int		i;
	int		size;
	int		min;

	size = ft_size(root);
	i = 1;
	while (i <= size)
	{
		curr = *root;
		min = 2147483647;
		while (curr)
		{
			if (curr->number <= min && curr->index == 0)
				min = curr->number;
			curr = curr->next;
		}
	}
	return (min);
}

void	ft_index(t_stack **root)
{
	t_stack	*curr;
	int		min;
	int		i;

	i = 0;
	min = ft_find_min(root);
	curr = *root;
	while (curr)
	{
		if (curr->number == min)
		{
			curr->index = i;
			i++;
		}
		curr = curr->next;
	}
}
