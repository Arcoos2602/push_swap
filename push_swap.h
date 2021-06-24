/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:54:34 by tcordonn          #+#    #+#             */
/*   Updated: 2021/06/24 16:01:52 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/include/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_stack
{
	int		max_size;
	int		top;
	int		*items;
}				t_stack;

int		swap_a(t_stack	*stk_a);
int		swap_b(t_stack	*stk_b);
void	swap(t_stack *stack_a, t_stack *stack_b);
int		push_a(t_stack	*stk_a, t_stack *stk_b);
int		push_b(t_stack	*stk_a, t_stack *stk_b);