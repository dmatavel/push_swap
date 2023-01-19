/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackinit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:38:31 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/19 15:55:51 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_lst	*create_stack_a(int size, int *array, t_lst **lst)
{
	int	i;

	i= 0;
	while (0 < size--)
		lstadd_back(lst, lstnew(array[i++]));
	return (*lst);
}

t_lst	*create_stack_b(int size, int content, t_lst **lst)
{
	int	i;

	i= 0;
	while (0 < size--)
		lstadd_back(lst, lstnew(content));
	return (*lst);
}

