/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:25:03 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/14 14:28:03 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *array, int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (array[i] < array[i + 1])
			i++;
		else
			return (FALSE);
	}
	free(array);
	return (TRUE);
}

int	is_sorted_lst(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp->next)
	{
		if (tmp->content < tmp->next->content)
			tmp = tmp->next;
		else
			return (FALSE);
	}
	return (TRUE);
}

int	find_max_element(t_list **lst)
{
	int		max;
	int		index;
	t_list	*tmp;

	if (!lst)
		return (0);
	tmp = *lst;
	max = tmp->content;
	while (1)
	{
		if (tmp->content > max)
			max = tmp->content;
		if (!tmp->next)
			break ;
		tmp = tmp->next;
	}
	tmp = *lst;
	index = 0;
	while (tmp->content != max)
	{
		tmp = tmp->next;
		index++;
	}
	return (index);
}

int	find_min_element(t_list **lst)
{
	int		min;
	int		index;
	t_list	*tmp;

	if (!lst)
		return (0);
	tmp = *lst;
	min = tmp->content;
	while (1)
	{
		if (tmp->content < min)
			min = tmp->content;
		if (!tmp->next)
			break ;
		tmp = tmp->next;
	}
	tmp = *lst;
	index = 0;
	while (tmp->content != min)
	{
		tmp = tmp->next;
		index++;
	}
	return (index);
}

void	remove_first_node(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	(*lst)->content = 0;
	(*lst)->index = 0;
	*lst = (*lst)->next;
	free(tmp);
}
