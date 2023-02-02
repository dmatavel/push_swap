/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:48:02 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/02 11:31:56 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/include/libft.h"

int		is_sorted(int *array, int size);
int		only_digits(char **s);
int		int_off_limits(char	*s);
int		has_dup_elements(int size, int *array);
int		has_invalid_integers(int n, char **arg);
void	sort_small_stack(t_list **stack_a, t_list **stack_b, int size);
void	put_stderror(void);
t_list	*create_stack_a(int size, int *array, t_list **lst);
t_list	*create_stack_b(int size, int content, t_list **lst);
t_list	*ft_lstswap(t_list *lst);
t_list	*ft_rotate_lst(t_list *lst);
t_list	*ft_reverse_rotate_lst(t_list *lst);
int		find_min_element(t_list **lst);
void	remove_first_node(t_list *head);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
int		find_max_element(t_list **lst);

#endif
