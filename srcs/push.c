/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:21:53 by tcordonn          #+#    #+#             */
/*   Updated: 2021/08/26 15:28:29 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		push_a(t_stack	*stk_a, t_stack *stk_b)
{
	ft_putstr_fd("pa\n", 1);
	if (stk_a->items[stk_a->top] != '\0' || stk_b->items[stk_b->top] == '\0') // 2eme condition certainement inutile
		return(-1);
	stk_a->items[stk_b->top] = stk_b->items[stk_a->top];
	stk_b->items[stk_b->top] = '\0';
	if (stk_b->top != stk_b->max_size - 1)
		stk_b->top++;
	if (stk_a->top != 0)
		stk_a->top--;
	return (1);
}

int		push_b(t_stack	*stk_a, t_stack *stk_b) // mis sur B
{
	ft_putstr_fd("pb\n", 1);
	if (stk_b->items[stk_b->top] != '\0' || stk_a->items[stk_a->top] == '\0')
		return (-1);
	stk_b->items[stk_b->top] = stk_a->items[stk_a->top];
	stk_a->items[stk_a->top] = '\0';
	if (stk_a->top < stk_a->max_size - 1)
		stk_a->top++;
	if (stk_b->top == stk_b->max_size - 1)
		stk_b->top--;
	return (1);
}
