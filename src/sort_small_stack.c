/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:39:32 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/23 16:40:57 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_small_stack(t_list **stack_a, int size)
{
	t_list	*tmp;
	t_list	*a;
	t_list	*b;
	t_list	*c;

	tmp = *stack_a;
	a = tmp;
	b = tmp->next;
	c = tmp->next->next;
	if (size == 2)
		*stack_a = sort_two(a);
	else if (size == 3)
		*stack_a = sort_three(a, b, c);
	else if (size == 4)
		*stack_a = sort_four(tmp);
}
