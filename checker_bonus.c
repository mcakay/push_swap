/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:41:16 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 19:45:23 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	checker(t_stack **stack_a, t_stack **stack_b, char *str)
{
	while (1)
	{
		str = get_next_line(1);
		if (str == NULL)
			break ;
		if (ft_strncmp(str, "sa", 2) == 0)
			ft_swap(stack_a);
		else if (ft_strncmp(str, "sb", 2) == 0)
			ft_swap(stack_b);
		else if (ft_strncmp(str, "ss", 2) == 0)
			ft_ss(stack_a, stack_b);
		else if (ft_strncmp(str, "rra", 3) == 0)
			ft_rev_rotate(stack_a);
		else if (ft_strncmp(str, "rrb", 3) == 0)
			ft_rev_rotate(stack_b);
		else if (ft_strncmp(str, "rrr", 3) == 0)
			ft_rrr(stack_a, stack_b);
		else if (ft_strncmp(str, "ra", 2) == 0)
			ft_rotate(stack_a);
		else if (ft_strncmp(str, "rb", 2) == 0)
			ft_rotate(stack_b);
		else if (ft_strncmp(str, "rr", 2) == 0)
			ft_rr(stack_a, stack_b);
		free(str);
	}
}

int	main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	char	*str;

	stack_b = NULL;
	str = NULL;
	if (argc < 2)
		exit(1);
	ft_get_numbers(argc, argv, &stack_a);
	checker(&stack_a, &stack_b, str);
	if (ft_is_sorted(&stack_a))
		ft_printf("OK!");
	else
		ft_printf("KO!");
	system("leaks checker");
	return (0);
}