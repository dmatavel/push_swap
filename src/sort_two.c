/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:50:22 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/20 14:26:28 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*sort_two(t_list *stack_a)
{
	stack_a = ft_lstswap(stack_a);
	ft_putstr_fd("sa\n", 1);
	return (stack_a);
}
