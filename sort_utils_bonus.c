/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:50:23 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 17:56:35 by mcakay           ###   ########.fr       */
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
