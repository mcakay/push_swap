/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:06:26 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 16:53:15 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_optimize(t_stack **stack_a, t_stack **stack_b, t_sort *sort)
{
	sort->size_a = ft_size(stack_a);
	if (sort->size_a <= 5)
	{
		ft_min_sort(stack_a, stack_b);
		exit(1);
	}
	else if (sort->size_a <= 250)
	{
		sort->chunk_start = (sort->size_a / 5);
		sort->chunk_add = (sort->size_a / 5);
		sort->rotate_range = 6;
	}
	else if (sort->size_a > 250)
	{
		sort->chunk_start = (sort->size_a / 10);
		sort->chunk_add = (sort->size_a / 10) - 5;
		sort->rotate_range = 15;
	}
}
