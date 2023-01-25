/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:39:32 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/25 15:46:19 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static t_list  *sort_two(t_list *stack_a);
static t_list  *sort_three(t_list *a, t_list *b, t_list *c);
static t_list  *sort_four(t_list *a, t_list *b, t_list *c, t_list *d);

void	sort_small_stack(t_list **stack_a, int size)
{
	t_list	*tmp;
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;

	tmp = *stack_a;
	a = tmp;
	b = tmp->next;
	c = tmp->next->next;
	d = tmp->next->next->next;
	if (size == 2)
		*stack_a = sort_two(a);
	else if (size == 3)
		*stack_a = sort_three(a, b, c);
	else if (size == 4)
		*stack_a = sort_four(a, b, c, d);
}

static t_list  *sort_two(t_list *stack_a)
{
	stack_a = ft_lstswap(stack_a);
	ft_putstr_fd("sa\n", 1);
	return (stack_a);
}

static t_list  *sort_three(t_list *a, t_list *b, t_list *c)
{
     if (a->content > b->content && b->content > c->content)
     {
         a = sort_two(a);
         a = ft_reverse_rotate_lst(a);
     }
     else if (a->content > b->content && b->content < c->content
         && a->content > c->content)
     {
         a = ft_rotate_lst(a);
         a = sort_two(a);
     }
     else if (a->content < b->content && b->content > c->content
         && a->content > c->content)
          a = ft_reverse_rotate_lst(a);
     else if (a->content < b->content && b->content > c->content
         && a->content < c->content)
	 {
         a = ft_reverse_rotate_lst(a);
         a = sort_two(a);
     }
     else if (a->content > b->content && b->content < c->content
         && a->content < c->content)
         a = sort_two(a);
	 return (a);
}

static t_list  *sort_four(t_list *a, t_list *b, t_list *c, t_list *d)
{
	int	i;

	t_list  *stack_b;

	stack_b = NULL;	
	i = find_min_element(a);
	ft_printlst(a);
	ft_printf("i = %d\n", i);
	if (i == 0)
	{
		ft_lstadd_front(&stack_b, a);
		stack_b->next = NULL;
		ft_printlst(stack_b);
	}
		a = sort_three(b, c, d);
	return (a);
}
