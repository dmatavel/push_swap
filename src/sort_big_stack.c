/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:00:34 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/06 11:22:34 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	create_index(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack_a;
	while (tmp != NULL)
	{
		tmp2 = *stack_a;
		while (tmp2 != NULL)
		{
			if (tmp2->content > tmp->content)
				tmp2->index += 1;
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	bit;
	int	size;

	bit = 0;
	while (!is_sorted_lst(stack_a))
	{
		size = ft_lstsize(*stack_a);
//		ft_printf("pegou o tamanho da lista\n");
		while (size--)
		{
//			ft_printf("entrou no 1o while\n");
			if ((((*stack_a)->index >> bit) & 1) == 1)
				*stack_a = ft_rotate_lst(*stack_a);
			else
				push_b(stack_a, stack_b);
		}
//		ft_printf("saiu do 1o while\n");
		size = ft_lstsize(*stack_b);
		while (size--)
		{
			if (stack_b == NULL)
				break ;
			push_a(stack_a, stack_b);
		}
//		ft_printf("saiu do 2o while\n");
		bit++;
//		ft_printf("bit: %d", bit);
	}
}
