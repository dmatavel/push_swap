/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:43:40 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/17 15:56:09 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

typedef struct		s_lst
{
	int				data;
	struct s_lst	*next;
}					t_lst;
//Move to header file ^^

t_lst *lstnew(int content)
{
	t_lst *new;
	new = malloc(sizeof(t_lst));
	new->data = content;
	new->next = NULL;
	return (new);
}

void	lst_add_back(t_lst **list, t_lst *node)
{
	t_lst	*temp;

	if (!list || !*list)
	{
		*list = node;
		return ;
	}
	temp = *list;
	while (temp->next)
		temp = temp->next;
	temp->next = node;
}

int	main(int argc, char **argv)
{
	t_lst	*list;
	int		size;
	int		i;
	int		*array;
	
	list = NULL;
	i = 0;
	size = (argc - 1);
	if (argc == 1)
		exit (EXIT_SUCCESS);
	if (has_invalid_integers(argc, argv) != TRUE)
	{
		put_stderror();
		exit (EXIT_FAILURE);
	}
	array = ft_stoarr((argc - 1), argv);
	while (0 < size--)
		lst_add_back(list, lstnew(array[i++]));
	return (EXIT_SUCCESS);
}
