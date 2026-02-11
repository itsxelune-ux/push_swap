/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:54:24 by omitrovs          #+#    #+#             */
/*   Updated: 2026/02/11 20:32:16 by omitrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_handle(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_lstsize_ps(*a);

	if (size == 2)
		sa(*a);
	else if (size == 3)
		sort_three(a);
	else
		sort(a, b);
	return ;
}

int main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
	t_stack *a;
	t_stack *b;
	
	a = NULL;
	b = NULL;
	parsing(argc, argv, &a);
	if (!is_sorted(a))
		sort_handle(&a, &b);
	free_stack(&a);
	if (b)
		free_stack(&a);
	return (0);
}
