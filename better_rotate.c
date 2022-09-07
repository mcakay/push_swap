/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   better_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:57:49 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/07 19:02:09 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_half(t_stack **root, int index)
{
	t_stack	*curr;
	int		size;
	int		i;

	curr = *root;
	size = ft_size(root);
	i = 0;
	while (i < size / 2)
	{
		if (curr->index == index)
			return (-1);
		curr = curr->next;
		i++;
	}
	while (i < size)
	{
		if (curr->index == index)
			return (1);
		curr = curr->next;
		i++;
	}
	return (0);
}

static void	ft_ra_rra_rr_rrr(t_stack **stack_a,
	t_stack **stack_b, int type, t_sort *sort)
{
	if (ft_check_half(stack_b, ft_max(stack_b)) == -1 && type == -1)
		ft_rr(stack_a, stack_b);
	else if (ft_check_half(stack_b, ft_max(stack_b)) == 1 && type == 1)
		ft_rrr(stack_a, stack_b);
	else
	{
		if (type == -1)
			ft_rotate(stack_a, "ra\n");
		else if (type == 1)
			ft_rev_rotate(stack_a, "rra\n");
	}
}

static void	ft_rotate_half(t_stack **stack_a,
	t_stack **stack_b, int type, t_sort *sort)
{
	if (sort != NULL && *stack_b
		&& (*stack_b)->index < ft_max(stack_b) - sort->rotate_range)
		ft_ra_rra_rr_rrr(stack_a, stack_b, type, sort);
	else if (sort == NULL && *stack_b && (*stack_b)->index != ft_max(stack_b))
		ft_ra_rra_rr_rrr(stack_a, stack_b, type, sort);
	else
	{
		if (type == -1)
			ft_rotate(stack_a, "ra\n");
		else if (type == 1)
			ft_rev_rotate(stack_a, "rra\n");
	}
}

void	ft_better_rotate(t_stack **stack_a,
	t_stack **stack_b, int chunk, t_sort *sort)
{
	t_stack	*curr;
	int		i;
	int		type;
	int		size;

	i = 0;
	size = ft_size(stack_a);
	curr = *stack_a;
	while (i < size / 2)
	{
		if (curr->index <= chunk)
			type = -1;
		curr = curr->next;
		i++;
	}
	while (i < size && type != -1)
	{
		if (curr->index <= chunk)
			type = 1;
		curr = curr->next;
		i++;
	}
	ft_rotate_half(stack_a, stack_b, type, sort);
}

void	ft_rotate_closest(t_stack **stack_a, t_stack **stack_b, int index)
{
	t_stack	*curr;
	int		i;
	int		type;
	int		size;

	i = 0;
	size = ft_size(stack_a);
	curr = *stack_a;
	while (i < size / 2)
	{
		if (curr->index == index)
			type = -1;
		i++;
		curr = curr->next;
	}
	while (i < size && type != -1)
	{
		if (curr->index == index)
			type = 1;
		i++;
		curr = curr->next;
	}
	ft_rotate_half(stack_a, stack_b, 1, NULL);
}
