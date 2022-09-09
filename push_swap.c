/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:51:25 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/07 21:39:16 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		exit(1);
	ft_get_numbers(argc, argv, &stack_a);
	ft_index(&stack_a);
	if (ft_is_sorted(&stack_a))
		exit(1);
	ft_sort(&stack_a, &stack_b);
	return (0);
}
