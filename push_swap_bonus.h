/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:40:35 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 18:03:05 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

#include "./ft_printf/srcb/ft_printf_bonus.h"
#include "./get_next_line/get_next_line.h"

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}	t_stack;	

t_stack	*ft_last_node(t_stack **root);
t_stack	*ft_create_node(int num, int index);
void	ft_add_node(t_stack **root, int num, int index);
void	ft_stackadd_front(t_stack **stack, t_stack *new);
long	ft_atol(char *str);
void	ft_deallocate(char **strs);
void	ft_swap(t_stack **root);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate(t_stack **root);
void	ft_rev_rotate(t_stack **root);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);
void	ft_push(t_stack **dest, t_stack **src);
void	ft_index(t_stack **root);
void	ft_get_numbers(int argc, char **argv, t_stack **root);
int		ft_is_sorted(t_stack **root);
void	ft_error(void);

#endif