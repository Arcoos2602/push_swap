/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:16:22 by tcordonn          #+#    #+#             */
/*   Updated: 2021/09/02 16:50:56 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		swap_a(t_stack	*stk_a)
{
	int		top;

	top = stk_a->top;
	if (stk_a->top > stk_a->max_size - 2)
		return (0);
	stk_a->items[top] = stk_a->items[top] + stk_a->items[top + 1];
	stk_a->items[top + 1] = stk_a->items[top] - stk_a->items[top + 1];
	stk_a->items[top] = stk_a->items[top] - stk_a->items[top + 1];
	ft_putstr_fd("sa\n", 1);
	return (1);
}

int		swap_b(t_stack	*stk_b)
{
	int		top;

	top = stk_b->top;
	
	if (stk_b->top > stk_b->max_size - 2)
		return (0);
	stk_b->items[top] = stk_b->items[top] + stk_b->items[top + 1];
	stk_b->items[top + 1] = stk_b->items[top] - stk_b->items[top + 1];
	stk_b->items[top] = stk_b->items[top] - stk_b->items[top + 1];
	ft_putstr_fd("sb\n", 1);
	return (1);
}

void	swap(t_stack *stk_a, t_stack *stk_b)
{
	swap_a(stk_a);
	swap_b(stk_b);
}
