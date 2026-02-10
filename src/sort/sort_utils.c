/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:01:09 by omitrovs          #+#    #+#             */
/*   Updated: 2026/02/10 18:27:48 by omitrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"


//stack size
//Why?
// decide rotate vs reverse rotate
// cost calculation
// small sorts

// Check if sorted

	
// Find min / max

//asign index

// Get position in stack

// Find target position (core logic)

// Cost helpers (sometimes here, sometimes separate)


t_stack *get_min_node(t_stack *stack)
{
	int min_value;
	t_stack *min_node;

	min_value = INT_MAX;
	min_node = NULL;
	
	if (!stack)
		return NULL;
	while(stack)
	{
		if ((stack)->content < min_value)
		{
			min_value = stack->content;
			min_node = stack;
		}
		stack = stack->next;
	}
	return(min_node);
}

void assign_index(t_stack *stack)
{
	int i;
	int median;

	i = 0;
	if(!stack)
		return ;
	median = ft_lstsize_ps(stack) / 2;
	while(stack)
	{
		stack->index = i;
		if (i <= median)
			stack->is_above_medan = 1;
		else
			stack->is_above_medan = 0;
		stack = stack->next;
		i++;
	}
	
}

void fix_stack(t_stack **a)
{
	t_stack = *min_node;
	int lent;
	
	min_node = get_min_node(*a);
	len = ft_lstsize_ps(*a);
	while((*a)->content != min_node->content)
	{
		if (min_node->index <= len / 2)
			ra(a);
		else
			rra(a);
	}
}
