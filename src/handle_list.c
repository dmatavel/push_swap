/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:11:32 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/20 00:24:01 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_lst	*lstnew(int content)
{
	t_lst	*new;

	new = malloc(sizeof(t_lst));
	if (!new)
		return (NULL);
	new->data = content;
	new->next = NULL;
	new->before = NULL;
	return (new);
}

void	lstadd_back(t_lst **lst, t_lst *new)
{
	t_lst	*tmp;

	if(!lst || !*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
	{
		tmp = tmp->next;
		tmp->before = tmp;
	}
	tmp->next = new;
}

int	lstsize(t_lst *lst)
{
	t_lst	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	print_lst(t_lst *lst)
{
	t_lst	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			ft_printf("%d\n", tmp->data);
		else
			ft_printf("%d, ", tmp->data);
		tmp = tmp->next;
	}
}
