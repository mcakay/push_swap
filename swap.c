/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:03:35 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 19:26:54 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **root, const char *print)
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
	ft_printf(print);
}
