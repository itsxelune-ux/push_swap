/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 17:07:25 by omitrovs          #+#    #+#             */
/*   Updated: 2026/02/11 20:28:43 by omitrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	sort_b(t_stack **a, t_stack **b)
{
	while (b)
	{
		assign_index(*a);
		assign_index(*b);
		find_target_node(*a, *b);
		calculate_cost(*a, *b);
		move_cheapest_node(a, b);
	}
}

void sort(t_stack **a, t_stack **b)
{
	int size;
	
	size = ft_lstsize_ps(*a);
	
	while (size > 3)
	{
		pb(a, b);
		size--;
	}
	sort_three(a);
	sort_b(a, b);
	fix_stack(a);
}