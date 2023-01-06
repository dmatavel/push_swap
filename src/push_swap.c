/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:06:35 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/06 14:17:46 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/include/libft.h"

int	int_off_limits(char *s)
{
	long	n;

	n = ft_atol(s);
	if (n > INT_MAX || n < INT_MIN)
		return (1);
	return (0);
}

int	only_digits(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!(ft_isdigit(s[i]) || ft_issign(s[i])))
			return (0);
		i++;
	}
	return (1);
}

int	ft_invalid_argc(int argc, int n)
{
	return (argc == n);
}
/*
int	duplicated_arg(char **argv)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = i + 1;
	size = 0;
	while (argv[i++])
		size++;
	i = 0;
	while (size)
	{
		while (j < (size -1))
		{
			if (s[i] == s[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
*/
/*
int	ft_invalid_input(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!only_digits(&s[i]))
			return (1);
		else if (int_off_limits(&s[i]))
			return (2);
		else if (duplicated_arg(&s[i]))
			return (3);
		i++;
	}
	return (0);
}

int	*copy_args(char **args)
{
	int	i;
	int size;
	int *arr;

	i = 0;
	size = 0;
	while (args[i++])
		size++;
	arr = malloc(sizeof(int) * size);
	i = 0;
	while (args[i])
	{
		arr[i] = ft_atol(args[i]);
		i++;
	}
	return (arr);
}
*/

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (ft_invalid_argc(argc, 1))
		exit (EXIT_SUCCESS);
	while (argv[i])
	{
		if (!only_digits(argv[i]))
		{
			ft_stderror();
			exit (EXIT_FAILURE);
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
