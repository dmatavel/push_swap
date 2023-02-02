/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackinit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:38:31 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/02 13:26:28 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*create_stack_a(int size, int *array, t_list **lst)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *lst;
	while (0 < size--)
	{
		ft_lstadd_back(&tmp, ft_lstnew(array[i++]));
		tmp->index = 0;
	}
	return (tmp);
}

t_list	*create_stack_b(int size, int content, t_list **lst)
{
	while (0 < size--)
		ft_lstadd_back(lst, ft_lstnew(content));
	return (*lst);
}
