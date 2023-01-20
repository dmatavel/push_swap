/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:11:32 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/20 14:48:34 by dmatavel         ###   ########.fr       */
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
	return (new);
}

void	lstadd_front(t_lst **lst, t_lst *new)
{
	if (!lst || !*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

void	lstadd_back(t_lst **lst, t_lst *new)
{
	t_lst	*tmp;

	if (!lst || !*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
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

void	print_lst(t_list *lst)
{
	t_list	*tmp;
	
	tmp = lst;
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			ft_printf("%d\n", *(int *)tmp->content);
		else
			ft_printf("%d, ", *(int *)tmp->content);
		tmp = tmp->next;
	}
}
