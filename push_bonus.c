/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:58:54 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 19:28:50 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_push(t_stack **dest, t_stack **src)
{
	t_stack	*tmp;
	t_stack	*push;

	if (*src == NULL)
		return ;
	push = ft_create_node((*src)->number, (*src)->index);
	tmp = (*src)->next;
	free(*src);
	*src = tmp;
	ft_stackadd_front(dest, push);
}
