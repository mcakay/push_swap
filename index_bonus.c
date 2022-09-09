/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:00:24 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 13:00:40 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_find_min(t_stack **root)
{
	t_stack	*curr;
	int		i;
	int		size;
	int		min;

	size = ft_size(root);
	i = 0;
	while (i < size)
	{
		curr = *root;
		min = 2147483647;
		while (curr)
		{
			if (curr->number <= min && curr->index == 0)
				min = curr->number;
			curr = curr->next;
		}
		i++;
	}
	return (min);
}

void	ft_index(t_stack **root)
{
	t_stack	*curr;
	int		min;
	int		i;
	int		size;

	i = 1;
	size = ft_size(root);
	min = ft_find_min(root);
	curr = *root;
	while (i != size + 1)
	{
		if (curr->number == min)
		{
			curr->index = i;
			min = ft_find_min(root);
			i++;
		}
		curr = curr->next;
		if (!curr)
			curr = *root;
	}
}
