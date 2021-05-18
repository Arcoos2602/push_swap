/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:43 by tcordonn          #+#    #+#             */
/*   Updated: 2021/05/16 11:34:33 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	init_stacks(t_stack *stk_a, t_stack *stk_b, int argc , char **argv)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (argv[++x] != NULL)
		stk_a->max_size++;
	stk_a->items = malloc(sizeof(int *) * stk_a->max_size); // a free
	stk_b->max_size = stk_a->max_size;
	stk_b->items = malloc(sizeof(int *) * stk_b->max_size);
	x = 0;
	while (argv[++x] != NULL)
	{
		stk_a->items[y] = ft_atoi(argv[x]);
		stk_b->items[y++] = '\0';
	}
	stk_a->top = 0;
	stk_b->top = stk_b->max_size;
}

int		main(int argc, char **argv)
{
	t_stack		*stk_a;
	t_stack		*stk_b;

	stk_a = malloc(sizeof(t_stack));
	stk_b = malloc(sizeof(t_stack));
	init_stacks(stk_a, stk_b, argc, argv);
	push_b(stk_a, stk_b);
	int		x = 0;
	while (x <= stk_b->max_size)
	{
		printf("%d\n", stk_b->items[x]);
		x++;
	}
}
