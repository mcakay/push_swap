/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:03:21 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/06 03:09:08 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack **root, const char *print)
{
	t_stack *tmp;

	ft_add_node(root, (*root)->number, (*root)->index);
	tmp = (*root)->next;
	free(*root);
	*root = tmp;
	if (print)
		ft_printf(print);
}

void	ft_rev_rotate(t_stack **root, const char *print)
{
	t_stack *new;
	t_stack *last;

	last = ft_last_node(root);
	new = ft_create_node(last->next->number, last->next->index);
	ft_stackadd_front(root, new);
	free(last->next);
	last->next = NULL;
	if (print)
		ft_printf(print);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate(stack_a, NULL);
	ft_rotate(stack_b, NULL);
	ft_printf("rr\n");
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rev_rotate(stack_a, NULL);
	ft_rev_rotate(stack_b, NULL);
	ft_printf("rrr\n");
}

void	ft_better_rotate(t_stack **stack_a, t_stack **stack_b, int index)
{
	t_stack *curr;
	int		size;
	int		i;

	curr = *stack_a;
	size = ft_size(stack_a);
	i = 0;
	while (i < size / 2)
	{
		if (curr->index <= index)
		{
			if (*stack_b && (*stack_b)->index != ft_max(stack_b))
			{
				if (ft_better_rotate2(stack_b, ft_max(stack_b)) == -1)
				{
					ft_rr(stack_a, stack_b);
					return ;
				}
			}
			ft_rotate(stack_a, "ra\n");
			return ;
		}
		curr = curr->next;
		i++;
	}
	while (i < size)
	{
		if (curr->index <= index)
		{
			if (*stack_b && (*stack_b)->index != ft_max(stack_b))
			{
				if (ft_better_rotate2(stack_b, ft_max(stack_b)) == 1)
				{
					ft_rrr(stack_a, stack_b);
					return ;
				}
			}
			ft_rev_rotate(stack_a, "rra\n");
			return ;
		}
		curr = curr->next;
		i++;
	}
}

int	ft_better_rotate2(t_stack **root, int index)
{
	t_stack *curr;
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

void	ft_better_rotate3(t_stack **root, int index)
{
	t_stack *curr;
	int		size;
	int		i;

	curr = *root;
	size = ft_size(root);
	i = 0;
	while (i < size / 2)
	{
		if (curr->index == index)
		{
			ft_rotate(root, "rb\n");
			return ;
		}
		curr = curr->next;
		i++;
	}
	while (i < size)
	{
		if (curr->index == index)
		{
			ft_rev_rotate(root, "rrb\n");
			return ;
		}
		curr = curr->next;
		i++;
	}
}

void	ft_better_rotate4(t_stack **root, t_stack **stack_b, int index)
{
	t_stack *curr;
	int		size;
	int		i;

	curr = *root;
	size = ft_size(root);
	i = 0;
	while (i < size / 2)
	{
		if (curr->index == index)
		{
			if (*stack_b && (*stack_b)->index != ft_max(stack_b))
			{
				if (ft_better_rotate2(stack_b, ft_max(stack_b)) == -1)
				{
					ft_rr(root, stack_b);
					return ;
				}
			}
			ft_rotate(root, "ra\n");
			return ;
		}
		curr = curr->next;
		i++;
	}
	while (i < size)
	{
		if (curr->index == index)
		{
			if (*stack_b && (*stack_b)->index != ft_max(stack_b))
			{
				if (ft_better_rotate2(stack_b, ft_max(stack_b)) == 1)
				{
					ft_rrr(root, stack_b);
					return ;
				}
			}
			ft_rev_rotate(root, "rra\n");
			return ;
		}
		curr = curr->next;
		i++;
	}
}
