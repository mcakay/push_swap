/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:03:21 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/07 19:08:57 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack **root, const char *print)
{
	t_stack	*tmp;

	ft_add_node(root, (*root)->number, (*root)->index);
	tmp = (*root)->next;
	free(*root);
	*root = tmp;
	if (print)
		ft_printf(print);
}

void	ft_rev_rotate(t_stack **root, const char *print)
{
	t_stack	*new;
	t_stack	*last;

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
