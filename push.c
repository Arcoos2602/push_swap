/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:21:53 by tcordonn          #+#    #+#             */
/*   Updated: 2021/06/16 11:46:45 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_a(t_stack	*stk_a, t_stack *stk_b)
{
	if (stk_a->top == 0 || stk_b->items[stk_b->top] == '\0') // 2eme condition certainement inutile
		return(-1);
	stk_a->items[stk_b->top] = stk_b->items[stk_a->top];
	stk_b->items[stk_b->top] = '\0';
	if (stk_b->top != stk_b->max_size)
		stk_b->top++;
	if (stk_a->top != stk_a->max_size)
		stk_a->top--;
	return (1);
}

int		push_b(t_stack	*stk_a, t_stack *stk_b) // mis sur B
{
	if (stk_b->top == 0 || stk_a->items[stk_a->top] == '\0') // 2eme condition certainement inutile
		return(-1);
	stk_b->items[stk_b->top] = stk_a->items[stk_a->top];
	stk_a->items[stk_a->top] = '\0';
	if (stk_a->top != stk_a->max_size)
		stk_a->top++;
	if (stk_b->top != stk_b->max_size)
		stk_b->top--;
	return (1);
}
