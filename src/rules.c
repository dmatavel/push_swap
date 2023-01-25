/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:49:40 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/25 15:28:46 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_lstswap(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (lst);
	tmp = ft_lstnew(0);
	if (lst->content > lst->next->content)
	{
		tmp->content = lst->content;
		lst->content = lst->next->content;
		lst->next->content = tmp->content;
	}
	free(tmp);
	return (lst);
}

t_list	*ft_rotate_lst(t_list *lst)
{
	t_list	*last;
	t_list	*tmp;

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
	ft_putstr_fd("ra\n", 1);
	return (lst);
}

t_list	*ft_reverse_rotate_lst(t_list *lst)
{
	t_list	*last;
	t_list	*last_prev;
	t_list	*tmp;
	int		size;

	if (!lst)
		return (lst);
	size = 0;
	tmp = lst;
	last = lst;
	last_prev = last;
	while (last->next != NULL)
		last = last->next;
	size = ft_lstsize(lst) - 2;
	while (size--)
		last_prev = last_prev->next;
	last_prev->next = NULL;
	lst = last;
	last->next = tmp;
	last = tmp;
	tmp = lst;
	ft_putstr_fd("ra\n", 1);
	return (lst);
}

/* contruction

void	pushb(t_list *stack_a)
{
	t_list	*tmp;
	if (!a || !b)
		return ;
	tmp = ft_lstnew(a->content)
	//remover o primeiro node de a
	b = ft_lstadd_front()
}
*/
