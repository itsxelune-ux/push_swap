/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:54:24 by omitrovs          #+#    #+#             */
/*   Updated: 2026/02/10 17:58:11 by omitrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Bitch handle errors:
// fix returns to void function and handle errors inside parsing, since we cant pass the splitted args into main (splitted_args is a static variable
// that will destroys after functions execute).

int main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
	t_stack *a;
	t_stack *b;
	
	a = NULL;
	b = NULL;
	if (parsing(argc, argv, &a));
}
