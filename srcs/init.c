/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:32:36 by tcordonn          #+#    #+#             */
/*   Updated: 2021/08/26 21:26:26 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		init_stacks(t_stack *stk_a, t_stack *stk_b, char **argv)
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

int		check_arg(char **argv, int argc) /// gérer plusieurs nombres dans un seul argument
{
	int	x;
	int	y;
	int check;

	x = 0;
	check = 0;
	if (argc == 1)
		return (-1);
	while (argv[++x])
	{
		y = 0;
		while (argv[x][y])
		{
			while (ft_iswhitespace(argv[x][y]) && argv[x][y] != '\0')
				y++;
			if (ft_isdigit(argv[x][y]) == 0)
				return (-1);
			y++;
		}
	}
	printf("check %d\narg %d\n", check, argc - 1);
	if (argc - 1 != check)
	{
		//return (-1);
	}
	/*while (argv[++x] != NULL)
	{
		y = 0;
		if (argv[x][0] == '\0')
		{
			ft_putstr_fd("Error\n", 0);
			return (-1);
		}
		while (argv[x][y])
		{
			printf("%c\n", argv[x][y]);
			while (ft_iswhitespace(argv[x][y]) && argv[x][y] != '\0')
				y++;
			if ((argv[x][y] != '\0' && ft_isdigit(argv[x][y]) == 0)
					|| (argv[x][y] == '-' && ft_isdigit(argv[x][y + 1]) == 0))
			{
				ft_putstr_fd("Error\n", 0);
				return (-1);
			}
			y++;
		}
	}*/
	return (0);
}
