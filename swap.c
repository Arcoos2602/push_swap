/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:16:22 by tcordonn          #+#    #+#             */
/*   Updated: 2021/08/19 11:57:15 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		swap_a(t_stack	*stk_a)
{
	int		top;

	top = stk_a->top;
	if (top == stk_a->max_size)
		return (-1);
	stk_a->items[top] = stk_a->items[top] + stk_a->items[top + 1];
	stk_a->items[top + 1] = stk_a->items[top] - stk_a->items[top + 1];
	stk_a->items[top] = stk_a->items[top] - stk_a->items[top + 1];
	return (1);
}

int		swap_b(t_stack	*stk_b)
{
	int		top;

	top = stk_b->top;
	/*if ((stk_b->top != 0 && stk_b->items[top - 1] == 0))
	{
		printf("check\n");
		return (-1);
	}*/
	stk_b->items[top] = stk_b->items[top] + stk_b->items[top - 1];
	stk_b->items[top + 1] = stk_b->items[top] - stk_b->items[top - 1];
	stk_b->items[top] = stk_b->items[top] - stk_b->items[top - 1];
	printf("1 : %d\n 2 : %d\n", stk_b->items[top], stk_b->items[top - 1]);
	return (1);
}

void	swap(t_stack *stk_a, t_stack *stk_b)
{
	swap_a(stk_a);
	swap_b(stk_b);
}
