/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:49:16 by omitrovs          #+#    #+#             */
/*   Updated: 2026/02/09 16:49:20 by omitrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <stdint.h>

typedef struct s_stack
{
	int				content;
	int				index;
	int				cost_a;
	int				cost_b;
	int				is_above_median;
	struct s_stack	*target_node;
	struct s_stack	*next;
}			t_stack;

int	ft_atol_safe(const char *str, long *result);

#endif
