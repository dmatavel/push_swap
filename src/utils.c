/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:25:03 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/25 15:48:35 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
	return (TRUE);
}

int	find_min_element(t_list *lst)
{
	int		n;
	int		i;
	int		j;
	t_list	*tmp;
	
	if (!lst)
		return (0);
	n = lst->content;
	i = 0;
	j = 0;
	tmp = lst;
	while (tmp->next)
	{
		if (n > tmp->content)
		{
			n = tmp->content;
			i++;
		}
		tmp = tmp->next;
		j++;
	}
	return (i - j);
}

t_list	*remove_first_node(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	lst = lst->next;
	tmp->content = 0;
	free(tmp);
	tmp = NULL;
	return (lst);
}
