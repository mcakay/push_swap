/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:58:00 by mcakay            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/09 20:34:45 by mcakay           ###   ########.fr       */
=======
/*   Updated: 2022/09/09 19:28:40 by mcakay           ###   ########.fr       */
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

<<<<<<< HEAD
int	ft_rotate(t_stack **root)
=======
void	ft_rotate(t_stack **root)
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
{
	t_stack	*tmp;

	if (*root == NULL)
<<<<<<< HEAD
		return (-1);
=======
		return ;
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
	ft_add_node(root, (*root)->number, (*root)->index);
	tmp = (*root)->next;
	free(*root);
	*root = tmp;
<<<<<<< HEAD
	return (1);
}

int	ft_rev_rotate(t_stack **root)
=======
}

void	ft_rev_rotate(t_stack **root)
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
{
	t_stack	*new;
	t_stack	*last;

	if (*root == NULL)
<<<<<<< HEAD
		return (-1);
=======
		return ;
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
	last = ft_last_node(root);
	new = ft_create_node(last->next->number, last->next->index);
	ft_stackadd_front(root, new);
	free(last->next);
	last->next = NULL;
<<<<<<< HEAD
	return (1);
}

int	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	return (1);
}

int	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
	return (1);
=======
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
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
}
