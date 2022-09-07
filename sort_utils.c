/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:22:27 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/07 16:39:46 by mcakay           ###   ########.fr       */
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

int	ft_sum(t_stack **root)
{
	t_stack *curr;
	int		result;

	curr = *root;
	result = 0;
	while (curr)
	{
		result += curr->index;
		curr = curr->next;
	}
	return (result);
}

int ft_median(t_stack **root)
{
	return (ft_sum(root) / ft_size(root));
}

int	ft_max(t_stack **root)
{
	t_stack *curr;
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

int	ft_min(t_stack **root)
{
	t_stack *curr;
	int		min;

	curr = *root;
	min = 2147483647;
	while (curr)
	{
		if (curr->index < min)
			min = curr->index;
		curr = curr->next;
	}
	return (min);
}

int	ft_search_mod(t_stack **root, int index)
{
	t_stack *curr;

	curr = *root;
	while (curr)
	{
		if (curr->index <= index)
			return (1);
		curr = curr->next;
	}
	return (0);
}

int	ft_closest(t_stack **root, int index)
{
	t_stack *curr;
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
