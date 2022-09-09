/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:41:16 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 20:49:51 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	checker_swap(t_stack **stack_a, t_stack **stack_b, char *str)
{
	int	x;

	x = 0;
	if (ft_strncmp(str, "sa", 2) == 0)
		x = ft_swap(stack_a);
	else if (ft_strncmp(str, "sb", 2) == 0)
		x = ft_swap(stack_b);
	else if (ft_strncmp(str, "ss", 2) == 0)
		x = ft_ss(stack_a, stack_b);
	return (x);
}

static int	checker_push(t_stack **stack_a, t_stack **stack_b, char *str)
{
	int	x;

	x = 0;
	if (ft_strncmp(str, "pa", 2) == 0)
		x = ft_push(stack_a, stack_b);
	else if (ft_strncmp(str, "pb", 2) == 0)
		x = ft_push(stack_b, stack_a);
	return (x);
}

static int	checker_rotate(t_stack **stack_a, t_stack **stack_b, char *str)
{
	int	x;

	x = 0;
	if (ft_strncmp(str, "rra", 3) == 0)
		x = ft_rev_rotate(stack_a);
	else if (ft_strncmp(str, "rrb", 3) == 0)
		x = ft_rev_rotate(stack_b);
	else if (ft_strncmp(str, "rrr", 3) == 0)
		x = ft_rrr(stack_a, stack_b);
	else if (ft_strncmp(str, "ra", 2) == 0)
		x = ft_rotate(stack_a);
	else if (ft_strncmp(str, "rb", 2) == 0)
		x = ft_rotate(stack_b);
	else if (ft_strncmp(str, "rr", 2) == 0)
		x = ft_rr(stack_a, stack_b);
	return (x);
}

static void	checker(t_stack **stack_a, t_stack **stack_b, char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		str = get_next_line(1);
		if (str == NULL)
			return ;
		if (checker_rotate(stack_a, stack_b, str))
			i++;
		else if (checker_swap(stack_a, stack_b, str))
			i++;
		else if (checker_push(stack_a, stack_b, str))
			i++;
		free(str);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
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
	return (0);
}
