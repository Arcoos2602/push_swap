/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:43 by tcordonn          #+#    #+#             */
/*   Updated: 2021/08/19 13:31:19 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int		init_stacks(t_stack *stk_a, t_stack *stk_b, int argc , char **argv)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (argv[++x] != NULL)
		stk_a->max_size++;
	stk_a->items = malloc(sizeof(int *) * stk_a->max_size);
	if (stk_a->items == NULL)
		return (-1);
	stk_b->max_size = stk_a->max_size;
	stk_b->items = malloc(sizeof(int *) * stk_b->max_size);
	if (stk_b->items == NULL)
		return (-1);
	x = 0;
	while (argv[++x] != NULL)
	{
		stk_a->items[y] = ft_atoi(argv[x]);
		stk_b->items[y++] = '\0';
	}
	stk_a->top = 0;
	stk_b->top = stk_b->max_size - 1;
	return (1);
}

void	print_stack(t_stack stk)
{
	int x;

	x = -1;
	while (x != stk_a->max_size)
			printf("%d\n", stk.items[++x]);
}

int		check_arg(char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (argv[x++])
	{
		y = -1;
		while (argv[x][++y])
		{
			if (ft_isdigit(argv[x][y]) == 0)
				return (-1);
		}
	}
}

int		main(int argc, char **argv) // check < int doublons et autre que chiffres et print error\n
{
	t_stack		*stk_a;
	t_stack		*stk_b;
	int		x = -1;

	stk_a = malloc(sizeof(t_stack));
	if (stk_a == NULL)
		return (1);
	stk_b = malloc(sizeof(t_stack));
	if (stk_b == NULL)
	{
		free(stk_a);
		return (1);
	}
	if (check_arg == -1)
		ft_putstr_fd("Error\n", 1);
	if (init_stacks(stk_a, stk_b, argc, argv))
	{
		while (x != stk_a->max_size)
			printf("%d\n", stk_a->items[++x]);
		printf("we can begin\n");
		swap_a(stk_a);
	}
	return (0);
}
