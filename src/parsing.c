/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:10:10 by omitrovs          #+#    #+#             */
/*   Updated: 2026/02/11 20:32:05 by omitrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	handle_error(char **args, t_stack **a, int should_free_split)
{
	ft_putstr_fd("Error\n", 2);
	if (should_free_split && a)
	{
		free_split(args);
		free_stack(a);
	}
	if (a || *a)
	{
		free_stack(a);	
	}
	exit(-1);
}

void	free_split(char **args)
{
	int	i;

	if (!args)
		return ;
	i = 0;
	while (args[i])
		free(args[i++]);
	free(args);
}

int is_duplicate(t_stack *a, int num)
{
	while (a)
	{
		if (a->content == num)
			return (1);
		a = a->next;
	}
	return (0);
}

int validate_args(char **args, t_stack **a)
{
	long number;
	while (*args)
	{
		if (!ft_atol_safe(*args, &number))
			return (0);
		if (is_duplicate(*a, number))
			return (0);
		ft_lstadd_back_ps(a, ft_lstnew_ps(number));
		args++;	
	}
	return (1);
}

void parsing(int argc, char **argv, t_stack **a)
{
	char **splitted_args;

	if (2 == argc)
	{
		splitted_args = ft_split(argv[1], ' ');
		if (!splitted_args)
			handle_error(NULL, a, 0);
		if (!splitted_args[0] || !splitted_args[0][0])
		{
			free_split(splitted_args);
			handle_error(NULL, a, 0);
		}
	}
	else
		splitted_args = argv + 1;
	if (!validate_args(splitted_args, a))
		handle_error(NULL, a, 0);
	if (2 == argc)
		free_split(splitted_args);
}