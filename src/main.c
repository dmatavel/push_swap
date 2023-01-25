/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:43:40 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/25 15:47:57 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	int		*array;
	t_list	*stack_a;

	stack_a = NULL;
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
	ft_printf("min = %d\n", find_min_element(stack_a));
	free(array);
	if ((argc - 1) <= 5)
		sort_small_stack(&stack_a, (argc - 1));
	ft_printlst(stack_a);
	return (EXIT_SUCCESS);
}
