#include "push_swap.h"

void	test_print_nums(t_stack **root)
{
	t_stack *curr;

	curr = *root;
	ft_printf("------------------------\n");
	while (curr)
	{
		ft_printf("index: %d, number: %d\n", curr->index, curr->number);
		curr = curr->next;
	}
	ft_printf("------------------------\n");
}