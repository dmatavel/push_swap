/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:06:35 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/03 14:10:16 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/include/libft.h"
int	ft_issign(int c)
{
	return (c == '-' || c == '+');
}

int	only_digits(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (!(ft_isdigit(s[i]) || ft_issign(s[i]) ||
				ft_isspace(s[i])))
	// Check duplicated elements in a string
	// Ft_split can do that
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (EXIT_SUCCESS);
	if (!(only_digits(argv[1])))
	{
		ft_putstr_fd("Error", 1);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
