/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:58:54 by mcakay            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/09 20:34:32 by mcakay           ###   ########.fr       */
=======
/*   Updated: 2022/09/09 19:28:50 by mcakay           ###   ########.fr       */
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

<<<<<<< HEAD
int	ft_push(t_stack **dest, t_stack **src)
=======
void	ft_push(t_stack **dest, t_stack **src)
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
{
	t_stack	*tmp;
	t_stack	*push;

	if (*src == NULL)
<<<<<<< HEAD
		return (-1);
=======
		return ;
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
	push = ft_create_node((*src)->number, (*src)->index);
	tmp = (*src)->next;
	free(*src);
	*src = tmp;
	ft_stackadd_front(dest, push);
<<<<<<< HEAD
	return (1);
=======
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
}
