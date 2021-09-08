/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:57:24 by tcordonn          #+#    #+#             */
/*   Updated: 2021/09/08 14:06:27 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	r_rotate_a(t_stack *stk_a)
{
	int	buf;
	int	x;

	x = stk_a->max_size - 1;
	if (stk_a->top > stk_a->max_size - 1)
		return (0);
	buf = stk_a->items[stk_a->top];
	while (x != stk_a->top - 1)
	{
		stk_a->items[x] ^= buf;
		buf ^= stk_a->items[x];
		stk_a->items[x--] ^= buf;
	}
	return (1);
}

int	r_rotate_b(t_stack *stk_b)
{
	int	buf;
	int	x;

	x = stk_b->max_size - 1;
	if (stk_b->top > stk_b->max_size - 1)
		return (0);
	buf = stk_b->items[stk_b->top];
	while (x != stk_b->top - 1)
	{
		stk_b->items[x] ^= buf;
		buf ^= stk_b->items[x];
		stk_b->items[x--] ^= buf;
	}
	return (1);
}

int	r_rotate_r(t_stack *stk_a, t_stack *stk_b)
{
	r_rotate_a(stk_a);
	r_rotate_b(stk_b);
	return (1);
}
