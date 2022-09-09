/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcakay <mcakay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 04:27:45 by mcakay            #+#    #+#             */
/*   Updated: 2022/09/09 17:49:09 by mcakay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_n(char *s1)
{
	int	i;

	i = 0;
	if (!s1)
		return (0);
	while (*(s1 + i))
	{
		if (*(s1 + i) == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		*s1 = '\0';
	}
	str = malloc(sizeof(char) * (ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = -1;
	while (*(s1 + ++i))
		*(str + i) = *(s1 + i);
	while (*(s2 + ++j))
		*(str + i + j) = *(s2 + j);
	*(str + i + j) = '\0';
	free(s1);
	return (str);
}

int	ft_strlen_gnl(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_get_line(char *str)
{
	char	*line;
	int		i;

	i = 0;
	if (!*(str + i))
		return (NULL);
	while (*(str + i) != '\n' && *(str + i))
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (*(str + i) != '\n' && *(str + i))
	{
		*(line + i) = *(str + i);
		i++;
	}
	if (*(str + i) == '\n')
	{
		*(line + i) = '\n';
		i++;
	}
	*(line + i) = '\0';
	return (line);
}

char	*ft_update_str(char *str)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	while (*(str + i) != '\n' && *(str + i))
		i++;
	if (!*(str + i))
	{
		free(str);
		return (NULL);
	}
	new = malloc(sizeof(char) * (ft_strlen_gnl(str) - i + 1));
	if (!new)
		return (NULL);
	i++;
	while (*(str + i))
		*(new + j++) = *(str + i++);
	*(new + j) = '\0';
	free(str);
	return (new);
}
