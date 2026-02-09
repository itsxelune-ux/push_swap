/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:49:55 by omitrovs          #+#    #+#             */
/*   Updated: 2026/02/09 17:52:44 by omitrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void rotate(t_stack **stack)
{
	t_stack *temp;
	
	if (!*stack || !stack || !(*stack)->next)
		return ;
	temp = *stack;
	*stack = temp->next;
	temp->next = NULL;
	ft_lstadd_back_ps(stack, temp); 
}

