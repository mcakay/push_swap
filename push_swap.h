/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:51:27 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/06 03:01:22 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

#include "./ft_printf/srcb/ft_printf_bonus.h"

typedef struct s_stack
{
	int				number;
	int				index;
	struct	s_stack *next;
} t_stack;	

void	ft_stackadd_front(t_stack **stack, t_stack *new);
void	ft_add_node(t_stack **root, int num, int index);
t_stack	*ft_create_node(int num, int index);
t_stack	*ft_last_node(t_stack **root);
long	ft_atol(char *str);
void	ft_get_numbers(int argc, char **argv, t_stack **root);
void	ft_deallocate(char **strs);
void	ft_swap(t_stack **root, const char *print);
void	ft_push(t_stack **dest, t_stack **src, const char *print);
void	ft_rotate(t_stack **root, const char *print);
void	ft_rev_rotate(t_stack **root, const char *print);
int		ft_is_sorted(t_stack **root);
void	ft_error(void);
int		ft_size(t_stack **root);
int		ft_sum(t_stack **root);
int 	ft_median(t_stack **root);
void	ft_index(t_stack **root);
int		ft_max(t_stack **root);
int		ft_min(t_stack **root);
int		ft_closest(t_stack **root, int index);
int		ft_search_mod(t_stack **root, int index);
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
void	ft_better_rotate(t_stack **stack_a, t_stack **stack_b, int index);
int		ft_better_rotate2(t_stack **root, int index);
void	ft_better_rotate3(t_stack **root, int index);
void	ft_better_rotate4(t_stack **root, t_stack **stack_b, int index);


//test
void	test_print_nums(t_stack **root);

#endif