/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:43:40 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/06 11:23:13 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h> //Remove before push

int	main(int argc, char **argv)
{
	int		*array;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		exit (EXIT_SUCCESS);
	if (has_invalid_integers(argc, argv) != TRUE)
	{
		put_stderror();
		exit (EXIT_FAILURE);
	}
	array = ft_stoarr((argc - 1), argv);
	if (is_sorted(array, (argc - 1)))
		exit (EXIT_SUCCESS);
	stack_a = create_stack_a((argc - 1), array, &stack_a);
//	stack_b = ft_lstnew(0);
//	stack_b = create_stack_b((argc - 1), 0, &stack_b);
	free(array);
	if ((argc - 1) <= 5)
		sort_small_stack(&stack_a, &stack_b, (argc - 1));
	else
	{
		create_index(&stack_a);
		radix_sort(&stack_a, &stack_b);
	}
/*	ft_printf("Stack_a\n");
	ft_printlst(stack_a);
	ft_printf("Stack_b\n");
x	create_index(&stack_a);
	ft_printlst(stack_b);
	push_b(&stack_a, &stack_b);
	ft_printf("Stack_a\n");
	ft_printlst(stack_a);
	ft_printf("Stack_b\n");
	ft_printlst(stack_b);
	push_a(&stack_a, &stack_b);
	ft_printf("Stack_a\n");
	ft_printlst(stack_a);
	ft_printf("Stack_b\n");
	ft_printlst(stack_b);
	return (EXIT_SUCCESS);*/
}
