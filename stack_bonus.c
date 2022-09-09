/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:43:29 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 12:44:50 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_stackadd_front(t_stack **stack, t_stack *new)
{
	if (!(*stack))
	{
		*stack = new;
		return ;
	}
	new -> next = *stack;
	*stack = new;
}

t_stack	*ft_create_node(int num, int index)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->number = num;
	new->next = NULL;
	new->index = index;
	return (new);
}

void	ft_add_node(t_stack **root, int num, int index)
{
	t_stack	*curr;

	if (*root == NULL)
	{
		*root = ft_create_node(num, index);
		return ;
	}
	curr = *root;
	while (curr->next)
		curr = curr->next;
	curr->next = ft_create_node(num, index);
}

t_stack	*ft_last_node(t_stack **root)
{
	t_stack	*curr;

	curr = *root;
	while (curr->next->next)
		curr = curr->next;
	return (curr);
}
