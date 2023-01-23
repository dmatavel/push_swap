/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:22:12 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/23 17:08:49 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*sort_four(t_list *stack)
{
	t_list	*tmp;
	t_list	*stack_b;
	int		min;
	int		key;

	stack_b = ft_lstnew(0);
	min = 0;
	//Find the min integer in stack a and push to stack b
	ft_printlst(stack_b);
	tmp = (stack);
	while (tmp->next)
	{
		if (min < tmp->data)
			min = tmp->data;
		tmp = tmp->next;
		key++;
	}
	return (stack);
}
