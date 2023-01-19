/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputerrs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:42:49 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/19 14:15:20 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	put_stderror(void)
{
	ft_putstr_fd("Error\n", 2);
}

int	only_digits(char **s)
{
	int	i;
	int	j;

	i = 1;
	while (s[i])
	{
		j = 0;
		if (s[i][j] == '-')
			j++;
		while (s[i][j])
		{
			if (!ft_isdigit(s[i][j]))
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

int	int_off_limits(char	*s)
{
	long	n;

	n = ft_atol(s);
	if (n > INT_MAX || n < INT_MIN)
		return (TRUE);
	else
		return (FALSE);
}

int	has_dup_elements(int size, int *array)
{
	int	i;
	int	j;

	i = 0;
	j = (i + 1);
	while (i < (size - 1))
	{
		while (j < (size))
		{
			if (array[i] == array[j++])
				return (TRUE);
		}
		i++;
		j = i + 1;
	}
	return (FALSE);
}

int	has_invalid_integers(int n, char **arg)
{
	int	i;
	int	j;
	int	*array;

	i = 1;
	j = 0;
	while ((n - 1) > j)
	{
		if (!only_digits(arg))
			return (FALSE);
		if (int_off_limits(arg[i]))
			return (FALSE);
		j++;
		i++;
	}
	array = ft_stoarr((n - 1), arg);
	if (has_dup_elements((n - 1), array))
	{
		free(array);
		return (FALSE);
	}
	free(array);
	return (TRUE);
}
