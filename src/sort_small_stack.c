/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:39:32 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/01 16:38:58 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static t_list  *sort_two(t_list *stack_a);
static t_list  *sort_three(t_list **list);
static t_list  *sort_four(t_list **stack_a, t_list **stack_b);

void	sort_small_stack(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 2)
		*stack_a = sort_two(*stack_a);
	else if (size == 3)
		*stack_a = sort_three(stack_a);
	else if (size == 4)
		*stack_a = sort_four(stack_a, stack_b);
}

static t_list  *sort_two(t_list *stack_a)
{
	stack_a = ft_lstswap(stack_a);
	ft_putstr_fd("sa\n", 1);
	return (stack_a);
}

static t_list  *sort_three(t_list **lst)
{
	int		index_min;
	int		index_max;

	index_min = find_min_element(lst);
	index_max = find_max_element(lst);
	if (index_min == 0)
	{
		*lst = ft_reverse_rotate_lst(*lst);
		*lst = ft_lstswap(*lst);
	}
	else if (index_min == 1 && index_max == 2)
		*lst = ft_lstswap(*lst);	
	else if (index_max == 1 && index_min == 2)
		*lst = ft_reverse_rotate_lst(*lst);
	else if (index_max == 0 && index_min == 1)
	{
		*lst = ft_lstswap(*lst);	
		*lst = ft_reverse_rotate_lst(*lst);
	}
	else
		*lst = ft_rotate_lst(*lst);
	

	return (*lst);
}

static t_list  *sort_four(t_list **stack_a, t_list **stack_b)
{
	int		index;
	t_list	*head;
	t_list	*head2;
	
	head = *stack_a;
	head2 = *stack_b;
	
	index = find_min_element(&head);
	if (index == 1)
		head = ft_rotate_lst(head);
	else if (index == 2)
	{	
		head = ft_reverse_rotate_lst(head);
		head = ft_reverse_rotate_lst(head);
	}
	else if (index == 3)
	{	
		head = ft_reverse_rotate_lst(head);
		head = ft_reverse_rotate_lst(head);
		head = ft_rotate_lst(head);
	}
	push_b(head, head2);
	head = sort_three(&head);
	push_a(&head, &head2);
	return (head);
}
