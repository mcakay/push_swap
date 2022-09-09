/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:59:54 by mcakay            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/09 20:38:51 by mcakay           ###   ########.fr       */
=======
/*   Updated: 2022/09/09 16:46:28 by mcakay           ###   ########.fr       */
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_less_5(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_is_sorted(stack_a) && stack_b == NULL)
<<<<<<< HEAD
		return ;
=======
				return ;
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
	if ((*stack_a)->index > (*stack_a)->next->index)
	{
		ft_swap(stack_a, "sa\n");
		if (ft_is_sorted(stack_a))
			return ;
		else
			ft_rev_rotate(stack_a, "rra\n");
		if (!ft_is_sorted(stack_a))
			ft_min_sort(stack_a, stack_b);
	}
	else
	{
		ft_rev_rotate(stack_a, "rra\n");
		if (ft_is_sorted(stack_a))
			return ;
		if ((*stack_a)->index > (*stack_a)->next->index)
			ft_swap(stack_a, "sa\n");
		else
			ft_rev_rotate(stack_a, "rra\n");
	}
}

<<<<<<< HEAD
static void	ft_min_rotate(t_stack **stack_a, int index)
{
	t_stack	*curr;
	int		i;

	i = 0;
	curr = *stack_a;
	while (i < ft_size(stack_a) / 2)
=======
static void ft_min_rotate(t_stack **stack_a, int index)
{
	t_stack *curr;
	int	i;
	int	size;

	size = ft_size(stack_a);
	i = 0;
	curr = *stack_a;
	while (i < size / 2)
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
	{
		if (curr->index == index)
		{
			ft_rotate(stack_a, "ra\n");
			return ;
		}
		i++;
		curr = curr->next;
	}
<<<<<<< HEAD
	while (i < ft_size(stack_a))
=======
	while (i < size)
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
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
		ft_less_5(stack_a, stack_b);
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
		while (stack_b != NULL)
			ft_push(stack_a, stack_b, "pa\n");
	}
<<<<<<< HEAD
}
=======
}
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
