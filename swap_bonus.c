/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:56:59 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 19:27:38 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_swap(t_stack **root)
{
	int	temp;
	int	index;

	if (*root == NULL || (*root)->next == NULL)
		return ;
	temp = (*root)->number;
	index = (*root)->index;
	(*root)->number = (*root)->next->number;
	(*root)->next->number = temp;
	(*root)->index = (*root)->next->index;
	(*root)->next->index = index;
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}
