/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:42:49 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/07 19:21:23 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	put_stderror(void)
{
	ft_putstr_fd("Error\n", 2);
}

int	only_integers(int n, char **arg)
{
	int	i;

	i = 1;
	while ((n - 1) != 0)
	{
		if (!only_digits(arg[i]))
			return (FALSE);
		if (off_int_limits(arg[i]))
			return (FALSE);
		i++;
		n--;
	}
	return (TRUE);
}

int	only_digits(char *s)
{
	int	i;

	i = 0;
	while (s[i] == '-')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	off_int_limits(char	*s)
{
	long	n;

	n = ft_atol(s);
	if (n > INT_MAX || n < INT_MIN)
		return (TRUE);
	else
		return (FALSE);
}