/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:59:54 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/10 03:35:49 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rs(t_stack **stack_a)
{
	ft_rev_rotate(stack_a, "rra\n");
	ft_swap(stack_a, "sa\n");
}

static void	ft_sr(t_stack **stack_a)
{
	ft_swap(stack_a, "sa\n");
	ft_rev_rotate(stack_a, "rra\n");
}

static void	ft_less_5(t_stack **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index
		&& (*stack_a)->index > (*stack_a)->next->next->index)
	{
		if ((*stack_a)->next->index < (*stack_a)->next->next->index)
		{
			ft_rev_rotate(stack_a, "rra\n");
			ft_rev_rotate(stack_a, "rra\n");
		}
		else
			ft_sr(stack_a);
	}
	else if ((*stack_a)->next->index > (*stack_a)->index
		&& (*stack_a)->next->index > (*stack_a)->next->next->index)
	{
		if ((*stack_a)->index > (*stack_a)->next->next->index)
			ft_rev_rotate(stack_a, "rra\n");
		else
			ft_rs(stack_a);
	}
	else if ((*stack_a)->next->next->index > (*stack_a)->next->index
		&& (*stack_a)->next->next->index > (*stack_a)->index)
	{
		if ((*stack_a)->next->index < (*stack_a)->index)
			ft_swap(stack_a, "sa\n");
	}
}

static void	ft_min_rotate(t_stack **stack_a, int index)
{
	t_stack	*curr;
	int		i;

	i = 0;
	curr = *stack_a;
	while (i < ft_size(stack_a) / 2)
	{
		if (curr->index == index)
		{
			ft_rotate(stack_a, "ra\n");
			return ;
		}
		i++;
		curr = curr->next;
	}
	while (i < ft_size(stack_a))
	{
		if (curr->index == index)
		{
			ft_rev_rotate(stack_a, "rra\n");
			return ;
		}
		i++;
		curr = curr->next;
	}
}

void	ft_min_sort(t_stack **stack_a, t_stack **stack_b)
{	
	if (ft_size(stack_a) == 2)
		ft_swap(stack_a, "sa\n");
	else if (ft_size(stack_a) == 3)
		ft_less_5(stack_a);
	else if (ft_size(stack_a) <= 5)
	{
		while (ft_size(stack_a) != 3)
		{
			if ((*stack_a)->index == ft_min(stack_a))
				ft_push(stack_b, stack_a, "pb\n");
			else
				ft_min_rotate(stack_a, ft_min(stack_a));
		}
		ft_min_sort(stack_a, stack_b);
		while (*stack_b != NULL)
			ft_push(stack_a, stack_b, "pa\n");
	}
}
