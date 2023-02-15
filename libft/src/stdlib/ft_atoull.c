/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:21:20 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/07 14:56:57 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

unsigned long long	ft_atoull(const char *str)
{
	unsigned long long	i;
	unsigned long long	n;
	unsigned long long	sign;

	i = 0;
	n = 0;
	sign = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	if (sign == 1)
		n *= -1;
	return (n);
}
