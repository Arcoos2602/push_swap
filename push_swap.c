/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:43 by tcordonn          #+#    #+#             */
/*   Updated: 2021/06/23 13:29:02 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	init_stacks(t_stack *stk_a, t_stack *stk_b, int argc , char **argv)
{
	int		x;
	int		y;

	x = -1;
	y = 0;
	while (argv[++x] != NULL)
		stk_a->max_size++;
	stk_a->max_size--;
	stk_a->items = malloc(sizeof(int *) * stk_a->max_size);
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

int		main(int argc, char **argv) // check < int doublons et autre que chiffres
{
	t_stack		*stk_a;
	t_stack		*stk_b;
	int		x = 0;
	//check
	stk_a = malloc(sizeof(t_stack));
	stk_b = malloc(sizeof(t_stack));
	init_stacks(stk_a, stk_b, argc, argv);
	while (x < stk_a->max_size)
	{
		printf("%d\n", stk_a->items[x]);
		x++;
	}
	push_b(stk_a, stk_b);
	push_b(stk_a, stk_b);
	push_b(stk_a, stk_b);
	x = 0;
	printf("pile A :\n");
	while (x < stk_a->max_size)
	{
		printf("%d\n", stk_a->items[x]);
		x++;
	}
	printf("FIN PILE A\n");
	x = 0;
	printf("pile B :\n");
	while (x < stk_b->max_size)
	{
		printf("%d\n", stk_b->items[x]);
		x++;
	}
}
