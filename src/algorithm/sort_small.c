/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:40:53 by omitrovs          #+#    #+#             */
/*   Updated: 2026/02/14 18:27:46 by omitrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 1 < 2 < 3
// 1 < 3 > 2
// 2 > 1 < 3
// 2 < 3 > 1
// 3 > 1 < 2

// 3 > 2 > 1

void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->content;
	second = (*a)->next->content;
	third = (*a)->next->next->content;
	if (first < second && second > third && first < third)
	{
		rra(a);
		sa(*a);
	}
	else if (first > second && second < third && first < third)
		sa(*a);
	else if (first < second && second > third && first > third)
		rra(a);
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first > second && second > third && first > third)
	{
		sa(*a);
		rra(a);
	}
}
