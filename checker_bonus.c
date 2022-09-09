/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:41:16 by mcakay            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/09 20:39:06 by mcakay           ###   ########.fr       */
=======
/*   Updated: 2022/09/09 19:45:23 by mcakay           ###   ########.fr       */
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

<<<<<<< HEAD
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
=======
static void	checker(t_stack **stack_a, t_stack **stack_b, char *str)
{
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
	while (1)
	{
		str = get_next_line(1);
		if (str == NULL)
<<<<<<< HEAD
			return ;
		if (checker_rotate(stack_a, stack_b, str))
			i++;
		else if (checker_swap(stack_a, stack_b, str))
			i++;
		else if (checker_push(stack_a, stack_b, str))
			i++;
=======
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
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
		free(str);
	}
}

int	main(int argc, char **argv)
{
<<<<<<< HEAD
	t_stack	*stack_a;
	t_stack	*stack_b;
=======
	t_stack *stack_a;
	t_stack *stack_b;
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
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
<<<<<<< HEAD
	return (0);
}
=======
	system("leaks checker");
	return (0);
}
>>>>>>> f3ac398a530a3c98873ff557b989b9a69394b98f
