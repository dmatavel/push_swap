/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:50:22 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/19 16:28:13 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_lst	*sa(t_lst *stack_a)
{
	t_lst	*tmp;

	tmp = lstnew(0);
	if(stack_a->data > stack_a->next->data)
	{
		tmp->data = stack_a->data;
		stack_a->data = stack_a->next->data;
		stack_a->next->data = tmp->data;
	}
	free(tmp);
	ft_putstr_fd("sa\n", 1);
	return (stack_a);
}
