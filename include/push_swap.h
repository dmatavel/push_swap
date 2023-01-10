/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:48:02 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/10 13:03:55 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/include/libft.h"

void	put_stderror(void);
int		only_integers(int n, char **arg);
int		only_digits(char *s);
int		int_off_limits(char	*s);
int		has_dup_elements(int size, int *array);

#endif
