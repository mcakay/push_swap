/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:22:27 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/07 19:16:03 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_size(t_stack **root)
{
	t_stack	*curr;
	int		i;

	i = 0;
	curr = *root;
	while (curr)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}

int	ft_max(t_stack **root)
{
	t_stack	*curr;
	int		max;

	curr = *root;
	max = 0;
	while (curr)
	{
		if (curr->index > max)
			max = curr->index;
		curr = curr->next;
	}
	return (max);
}

int	ft_closest(t_stack **root, int index)
{
	t_stack	*curr;
	int		min;

	min = ft_max(root);
	curr = *root;
	while (curr)
	{
		if (curr->index > index && curr->index < min)
			min = curr->index;
		curr = curr->next;
	}
	return (min);
}

int	ft_is_sorted(t_stack **root)
{
	t_stack	*curr;
	int		i;
	int		size;

	size = ft_size(root) - 1;
	curr = *root;
	i = 0;
	while (curr->next)
	{
		if (curr->number < curr->next->number)
			i++;
		curr = curr->next;
	}
	if (i == size)
		return (1);
	return (0);
}
