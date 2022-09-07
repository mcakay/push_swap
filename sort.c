#include "push_swap.h"

int	ft_is_sorted(t_stack **root)
{
	t_stack *curr;
	int		i;
	int		size;

	size = ft_size(root) - 1;
	curr = *root;
	i = 0;
	while (curr->next)
	{
		if (curr->number < curr->next->number)
			i++;
		curr = curr->next;
	}
	if (i == size)
		return (1);
	return (0);
}

static void	ft_recursive_push_b(t_stack **stack_a, t_stack  **stack_b, t_sort *sort)
{
	int		chunk;
	static	int	a;

	if (ft_size(stack_a) == 1)
		return ;
	chunk = sort->chunk_start;
	if (a == sort->chunk_start)
		sort->chunk_start += sort->chunk_add;
	if ((*stack_a)->index <= chunk)
	{
		ft_push(stack_b, stack_a, "pb\n");
		a++;
	}
	else
		ft_better_rotate(stack_a, stack_b, chunk, sort);
	ft_recursive_push_b(stack_a, stack_b, sort);
}


static void	ft_recursive_push_a(t_stack **stack_a, t_stack  **stack_b, t_sort *sort)
{

	if (ft_size(stack_b) == 0)
		return ;
	if ((*stack_a) == NULL)
		ft_push(stack_a, stack_b, "pa\n");
	while ((*stack_a)->index != ft_closest(stack_a, (*stack_b)->index))
		ft_rotate_closest(stack_a, stack_b, ft_closest(stack_a, (*stack_b)->index));
	ft_push(stack_a, stack_b, "pa\n");
	ft_recursive_push_a(stack_a, stack_b, sort);
}


void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_sort *sort;
	sort = malloc(sizeof(sort));
	if (!sort)
		return ;
	ft_optimize(stack_a, sort);
	ft_recursive_push_b(stack_a, stack_b, sort);
	ft_recursive_push_a(stack_a, stack_b, sort);
	while (ft_last_node(stack_a)->next->index != ft_max(stack_a))
		ft_rev_rotate(stack_a, "rra\n");
	free(sort);
}