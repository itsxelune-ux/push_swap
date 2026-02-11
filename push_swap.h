/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omitrovs <omitrovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:49:16 by omitrovs          #+#    #+#             */
/*   Updated: 2026/02/11 20:31:04 by omitrovs         ###   ########.fr       */
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
void parsing(int argc, char **argv, t_stack **a);
void sort_three(t_stack **a);
int is_sorted(t_stack *a);
t_stack *get_min_node(t_stack *stack);
void assign_index(t_stack *stack);
void fix_stack(t_stack **a);
t_stack	*ft_lstnew_ps(int content);
void	ft_lstadd_front_ps(t_stack **lst, t_stack *new);
int	ft_lstsize_ps(t_stack *lst);
void	ft_lstadd_back_ps(t_stack **lst, t_stack *new);
void move_cheapest_node(t_stack **a, t_stack **b);
int	abs_v(int num);
void sort(t_stack **a, t_stack **b);
void do_single_rotate(t_stack **a, t_stack **b, t_stack *cheapest_node);
void do_double_rotate(t_stack **a, t_stack  **b, t_stack *cheapest_node);
void sa(t_stack *a);
void ss(t_stack *a, t_stack *b);
void find_target_node(t_stack *a, t_stack *b);
void calculate_cost(t_stack *a, t_stack *b);
void sb(t_stack *b);
void rr(t_stack **a, t_stack **b);
void rb(t_stack **b);
void ra (t_stack **a);
void rrr(t_stack **a, t_stack **b);
void	free_split(char **args);
void rrb(t_stack **b);
void rra(t_stack **a);
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
t_stack	*ft_lstlast_ps(t_stack *lst);
void	free_stack(t_stack **stack);
#endif
