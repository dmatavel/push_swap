/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:43:40 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/19 23:39:18 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_lst	*stack_a;
	t_lst	*stack_b;
	int		*array;
	
	if (argc == 1)
		exit (EXIT_SUCCESS);
	if (has_invalid_integers(argc, argv) != TRUE)
	{
		put_stderror();
		exit (EXIT_FAILURE);
	}
	array = ft_stoarr((argc - 1), argv);
	stack_a = NULL;
	stack_b = NULL;
	stack_a = create_stack_a((argc - 1), array, &stack_a);
	stack_b = create_stack_b((argc - 1), 0, &stack_b);
	free(array);
//	if ((argc - 1) == 2)
//		stack_a = sort_two(stack_a);{
	stack_a = ft_reverse_rotate_lst(stack_a);
	print_lst(stack_a);
	//Free stack_a and stack_b
	return (EXIT_SUCCESS);
}
