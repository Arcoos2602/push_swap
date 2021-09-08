/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:54:34 by tcordonn          #+#    #+#             */
/*   Updated: 2021/09/08 17:25:49 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_stack
{
	int		max_size;
	int		top;
	int		*items;
}				t_stack;

int count(t_stack	*stk_a, char **argv, int *x, int *y);
int	swap_a(t_stack	*stk_a);
int	swap_b(t_stack	*stk_b);
void	swap(t_stack *stack_a, t_stack *stack_b);
int	push_a(t_stack	*stk_a, t_stack *stk_b);
int	push_b(t_stack	*stk_a, t_stack *stk_b);
void	end(t_stack *stk_a, t_stack *stk_b, int check);
int	init_stacks(t_stack *stk_a, t_stack *stk_b, char **argv);
int	check_arg(char **argv, int argc);
int	check_int(int check, char *str);
int	rotate_a(t_stack *stk_a);
int	rotate_b(t_stack *stk_a);
int	rotate_r(t_stack *stk_a, t_stack *stk_b);
int	r_rotate_a(t_stack *stk_a);
int	r_rotate_a(t_stack *stk_b);
int	r_rotate_r(t_stack *stk_a, t_stack *stk_b);
int	is_sort(t_stack *stk);
int	simplify_stack_a(t_stack *stk);
void	sort_small_stack(t_stack *stk_a, t_stack *stk_b);
void	sort_big_stack(t_stack *stk_a, t_stack *stk_b);