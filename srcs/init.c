/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:32:36 by tcordonn          #+#    #+#             */
/*   Updated: 2021/09/01 16:57:56 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int max_size(t_stack *stk_a, char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (argv[++x] != NULL)
	{
		y = 0;
		if (argv[x][y] == '\0')
			return (0);
		while (argv[x][y] != '\0')
		{
			while (ft_iswhitespace(argv[x][y]))
				y++;
			if (argv[x][y] != '\0' && (ft_isdigit(argv[x][y]) || argv[x][y] == '-'))
			{
				/*if (argv[x][y] == '-' && ft_isdigit(argv[x][y + 1]) == 0)
					return (0);
				else
					y++;*/	
				while (ft_isdigit(argv[x][y]))
					y++;
				stk_a->max_size++;
			}
			else if (argv[x][y] != '\0')
				return (0);
		}
	}
	return (1);
}

void	check_double(t_stack *stk_a, t_stack *stk_b, char *str, int j)
{
	while (j >= 0)
	{
		if (ft_atoi(str) == stk_a->items[j--])
		{
			ft_putstr_fd("Error\n", 1);
			end (stk_a, stk_b);
		}
	}
}

void	fill(t_stack *stk_a, t_stack *stk_b, char *str, int *y)
{
	static int	j = 0;

	if (str[*y] != '\0')
	{
		if (j != 0)
			check_double(stk_a, stk_b, &str[*y], j);
		stk_a->items[j] = ft_atoi(&str[*y]);
		stk_b->items[j++] = 0;
		if (str[*y] == '-')
			++*y;
		while (ft_isdigit(str[*y]))
			++*y;
	}
}

int	init_stacks2(t_stack *stk_a, t_stack *stk_b, char **argv)
{
	int	x;
	int y;

	x = 0;
	y = 0;
	while (argv[++x] != NULL)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			while (ft_iswhitespace(argv[x][y]))
				y++;
			if (argv[x][y] != '\0' && (ft_isdigit(argv[x][y]) || (argv[x][y] == '-')))
			{
				/*if (argv[x][y] == '-' && ft_isdigit(argv[x][y + 1]) == 0)
					return (0);*/
				fill(stk_a, stk_b, argv[x], &y);
			}
			else if (argv[x][y] != '\0')
				return (0);
		}
	}
	return (1);
}

int	init_stacks(t_stack *stk_a, t_stack *stk_b, char **argv)
{
	int	x;
	int	y;

	stk_a->items = NULL;
	stk_b->items = NULL;
	x = 0;
	y = 0;
	if (!(max_size(stk_a, argv)))
		return (0);
	exit (0);
	stk_a->items = malloc(sizeof(int) * stk_a->max_size);
	if (stk_a->items == NULL)
		return (0);
	stk_b->max_size = stk_a->max_size;
	stk_b->items = malloc(sizeof(int) * stk_b->max_size);
	if (stk_b->items == NULL)
		return (0);
	stk_a->top = 0;
	stk_b->top = stk_b->max_size - 1;
	if (!(init_stacks2(stk_a, stk_b, argv)))
		return (0);
	while (stk_a->max_size != x)
	{
		printf("stk_a->items[%d] = %d\n", x, stk_a->items[x]);
		x++;
	}
	//printf("max size %d\n", stk_a->items[stk_a->max_size]);
	return (1);
}
