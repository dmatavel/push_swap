/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:06:35 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/05 13:48:26 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/include/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

long	ft_atoi_long(const char *str)
{
	long	index;
	long	sign;
	long	num;

	index = 0;
	sign = 1;
	num = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
		sign = 1 - 2 * (str[index++] == '-');
	while (ft_isdigit(str[index]))
	{
		num = num * 10 + str[index] - '0';
		index++;
	}
	return (sign * num);
}

int	ft_issign(int c)
{
	return (c == '-' || c == '+');
}

int	int_limits(char *s)
{
	long	n;

	n = ft_atoi_long(s);
	printf("%ld\n", n);
	if (n > INT_MAX || n < INT_MIN)
		return (1);
	return (0);
}

int	only_digits(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (!(ft_isdigit(s[i]) || ft_issign(s[i])
				|| ft_isspace(s[i])))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (EXIT_SUCCESS);
	i = 1;
	while (argv[i])
	{
		if ((!(only_digits(argv[i])) || int_limits(argv[i])))
		{
			ft_putstr_fd("Error", 2);
			return (EXIT_FAILURE);
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
