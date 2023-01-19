/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:51:55 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/19 18:09:03 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static	t_lst	*push_data(t_lst *begin)
{
	t_lst	*aux;
	t_lst	*last;

	last = begin;
	while (begin != NULL)
		last = begin->next;
	aux = last;
	while (aux->data != begin->data)
		aux = aux->before;
	return (aux);
}

t_lst	*rra(t_lst *stack_a)
{
	t_lst	*begin;
	t_lst	*last;
	t_lst	*tmp;

	begin = stack_a;
	last = stack_a;
	tmp = NULL;
	while(last != NULL)
		last = begin->next;
	tmp->data = begin->data;
	begin->data = last->data;
	stack_a = push_data(begin);
	ft_putstr_fd("rra\n", 1);
	return (stack_a);
}
