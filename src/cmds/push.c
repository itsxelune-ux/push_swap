/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:00:50 by omitrovs          #+#    #+#             */
/*   Updated: 2026/02/08 18:09:11 by omitrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static void push(t_stack **src, t_stack **dest)
{
    t_stack *tmp;

    if (!src || !*src)
        return ;
    tmp = *src;
    *src = (*src)->next;
    tmp->next = *dest;
    *dest = temp;
}

void pa(t_stack **a, t_stack **b)
{
    push(b, a);
    ft_printf("pa\n");
}

void pb(t_stack **a, t_stack **b)
{
    push(a, b);
    ft_printf("pb\n");
}