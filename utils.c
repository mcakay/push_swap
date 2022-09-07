/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:09:45 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/07 19:16:40 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		{
			ft_printf("Error!\n");
			exit(1);
		}
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
		i++;
	}
	while (ft_isdigit(*(str + i)))
	{
		num = (num * 10) + (*(str + i) - 48);
		i++;
	}
	return (num * sign);
}

void	ft_error(void)
{
	ft_printf("Error!\n");
	exit(1);
}
