/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:49:40 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/06 10:49:32 by dmatavel         ###   ########.fr       */
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
	ft_putstr_fd("sa\n", 1);
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
	ft_putstr_fd("rra\n", 1);
	return (lst);
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*new;
	
	new = ft_lstnew((*stack_b)->content);
	new->index = (*stack_b)->index;
	new->next = *stack_a;
	*stack_a = new;
	ft_putstr_fd("pa\n", 1);
	remove_first_node(stack_b);
}
	/*{
	t_list	*tmp;
	t_list	*tmp2;

	if (*stack_b == NULntent: 3
index: 1
content: 2
index: 0
Stack_b
content: 0L || stack_b == NULL)
		return ;
	tmp = *stack_b;
	tmp2 = (*stack_b)->next;
	tmp->next = *stack_b;
	*stack_b = tmp2;
	*stack_a = tmp;*/
//}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*new;
	
	new = ft_lstnew((*stack_a)->content);
	new->index = (*stack_a)->index;
	new->next = *stack_b;
	*stack_b = new;
	ft_putstr_fd("pb\n", 1);
	remove_first_node(stack_a);
}
	//pop_a;
	/*t_list	*tmp;
	t_list	*tmp2;

	if (*stack_a == NULL || stack_a == NULL)
		return ;
	tmp = *stack_a;
	tmp2 = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_a = tmp2;
	*stack_b = tmp;
	ft_putstr_fd("pb\n", 1);*/
