/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:58:00 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 19:28:40 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_rotate(t_stack **root)
{
	t_stack	*tmp;

	if (*root == NULL)
		return ;
	ft_add_node(root, (*root)->number, (*root)->index);
	tmp = (*root)->next;
	free(*root);
	*root = tmp;
}

void	ft_rev_rotate(t_stack **root)
{
	t_stack	*new;
	t_stack	*last;

	if (*root == NULL)
		return ;
	last = ft_last_node(root);
	new = ft_create_node(last->next->number, last->next->index);
	ft_stackadd_front(root, new);
	free(last->next);
	last->next = NULL;
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
}
