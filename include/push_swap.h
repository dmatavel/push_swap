/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:48:02 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/20 14:30:52 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/include/libft.h"

typedef struct s_lst
{
	int				data;
	struct s_lst	*next;
}					t_lst;

int		lstsize(t_lst *lst);
int		only_digits(char **s);
int		int_off_limits(char	*s);
int		has_dup_elements(int size, int *array);
int		has_invalid_integers(int n, char **arg);
void	put_stderror(void);
void	lstadd_front(t_lst **lst, t_lst *new);
void	lstadd_back(t_lst **lst, t_lst *new);
void	print_lst(t_list *lst);
t_lst	*lstnew(int content);
t_list	*sort_two(t_list *stack_a);
t_list	*create_stack_a(int size, int *array, t_list **list);
t_lst	*create_stack_b(int size, int content, t_lst **lst);
t_lst	*sa(t_lst *stack_a);
t_lst	*rra(t_lst *stack_a);
t_list	*ft_lstswap(t_list *lst);
t_lst	*ft_rotate_lst(t_lst *lst);
t_lst	*ft_reverse_rotate_lst(t_lst *lst);

#endif
