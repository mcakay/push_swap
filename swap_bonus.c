/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:56:59 by mcakay            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/09 20:34:51 by mcakay           ###   ########.fr       */
=======
/*   Updated: 2022/09/09 19:27:38 by mcakay           ###   ########.fr       */
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

<<<<<<< HEAD
int	ft_swap(t_stack **root)
=======
void	ft_swap(t_stack **root)
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
{
	int	temp;
	int	index;

	if (*root == NULL || (*root)->next == NULL)
<<<<<<< HEAD
		return (-1);
=======
		return ;
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
	temp = (*root)->number;
	index = (*root)->index;
	(*root)->number = (*root)->next->number;
	(*root)->next->number = temp;
	(*root)->index = (*root)->next->index;
	(*root)->next->index = index;
<<<<<<< HEAD
	return (1);
}

int	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	return (1);
=======
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
}
