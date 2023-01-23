/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:19:09 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/23 15:29:13 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

t_list	*sort_three(t_list *a, t_list *b, t_list *c)
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
