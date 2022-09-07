/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:03:27 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/07 19:07:24 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **dest, t_stack **src, const char *print)
{
	t_stack	*tmp;
	t_stack	*push;

	push = ft_create_node((*src)->number, (*src)->index);
	tmp = (*src)->next;
	free(*src);
	*src = tmp;
	ft_stackadd_front(dest, push);
	ft_printf(print);
}
