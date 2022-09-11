/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:45:59 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/12 00:20:50 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_deallocate(char **strs)
{
	int	i;

	i = 0;
	while (*(strs + i))
	{
		free(*(strs + i));
		i++;
	}
	free(strs);
}

static void	ft_check(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (ft_isalpha(*(str + i)))
			ft_error();
		i++;
	}
}

long	ft_atol(char *str)
{
	int		sign;
	int		i;
	long	num;

	sign = 1;
	i = 0;
	num = 0;
	ft_check(str);
	while (*(str + i) == ' ' || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign = -sign;
		if (!ft_isdigit(*(str + i + 1)))
			ft_error();
		i++;
	}
	i--;
	while (ft_isdigit(*(str + ++i)))
		num = (num * 10) + (*(str + i) - 48);
	if (*(str + i))
		ft_error();
	return (num * sign);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
