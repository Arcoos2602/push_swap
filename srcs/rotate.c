/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 13:15:25 by tcordonn          #+#    #+#             */
/*   Updated: 2021/09/02 17:27:45 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int rotate_a(t_stack *stk_a)
{
    int buf;
    int x;

    x = 0;
    if (stk_a->top > stk_a->max_size - 2)
        return (0);
    buf = stk_a->items[stk_a->max_size - 1];
    while (x != stk_a->max_size)
    {
        stk_a->items[x] ^= buf;
        buf ^= stk_a->items[x];
        stk_a->items[x++] ^= buf;
    }
    return (1);
}

int rotate_b(t_stack *stk_b)
{
    int buf;
    int x;

    x = 0;
    if (stk_b->top > stk_b->max_size - 2)
        return (0);
    buf = stk_b->items[stk_b->max_size - 2];
    while (x != stk_b->max_size)
    {
        stk_b->items[x] ^= buf;
        buf ^= stk_b->items[x];
        stk_b->items[x++] ^= buf;
    }
    return (1);
}

int rotate_r(t_stack *stk_a, t_stack *stk_b)
{
    rotate_a(stk_a);
    rotate_b(stk_b);
    return (1);
}

int r_rotate_a(t_stack *stk_a)
{
    int buf;
    int x;

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

int r_rotate_b(t_stack *stk_b)
{
    int buf;
    int x;

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

int r_rotate_r(t_stack *stk_a, t_stack *stk_b)
{
    r_rotate_a(stk_a);
    r_rotate_b(stk_b);
    return (1);
}
