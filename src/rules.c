/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:49:40 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/20 00:36:33 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_lst   *ft_swaplst(t_lst *lst)
{
    t_lst   *tmp;

	if (!lst)
		return (lst);
    tmp = lstnew(0);
    if(lst->data > lst->next->data)
    {
        tmp->data = lst->data;
        lst->data = lst->next->data;
        lst->next->data = tmp->data;
    }
    free(tmp);
    return (lst);
}

t_lst	*ft_rotate_lst(t_lst *lst)
{
	t_lst	*last;
	t_lst	*tmp;

	if (!lst)
		return (lst);
	tmp = lst;
	last = lst;
	while (last->next != NULL)
		last = last->next;
	lst = lst->next;
	tmp->next = NULL;
	last->next = tmp;
	last = tmp;
	tmp = lst;
	return (lst);
}

t_lst	*ft_reverse_rotate_lst(t_lst *lst)
{
	t_lst	*last;
	t_lst	*last_prev;
	t_lst	*tmp;
	int		size;

	if (!lst)
		return (lst);
	size = 0;
	tmp = lst;
	last = lst;
	last_prev = last;
	while (last->next != NULL)
	{
		last = last->next;
		size++;
	}
	while ((size - 1))
	{
		last_prev = last_prev->next;
		size--;
	}
	last_prev->next = NULL;
	lst = last;
	last->next = tmp;
	last = tmp;
	tmp = lst;
	return (lst);
}
