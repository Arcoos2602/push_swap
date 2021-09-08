/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:43 by tcordonn          #+#    #+#             */
/*   Updated: 2021/09/08 17:25:25 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack(t_stack *stk)
{
	int	x;

	x = 0;
	while (x != stk->max_size)
		printf("%d\n", stk->items[x++]);
}

void	end(t_stack *stk_a, t_stack *stk_b, int check)
{
	if (stk_a != NULL)
	{
		if (stk_a->items != NULL)
			free(stk_a->items);
		free(stk_a);
	}
	if (stk_b != NULL)
	{
		if (stk_b->items != NULL)
			free(stk_b->items);
		free(stk_b);
	}
	if (check == 1)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	exit (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	t_stack		*stk_a;
	t_stack		*stk_b;

	if (argc == 1)
		return (1);
	stk_b = NULL;
	stk_a = malloc(sizeof(t_stack));
	if (stk_a == NULL)
		end(stk_a, stk_b, 1);
	stk_b = malloc(sizeof(t_stack));
	if (stk_b == NULL)
		end(stk_a, stk_b, 1);
	if (!(init_stacks(stk_a, stk_b, argv)))
		end(stk_a, stk_b, 1);
    if (is_sort(stk_a))
		end (stk_a, stk_b, 0);
	if (!(simplify_stack_a(stk_a)))
		return (-1);
	if (stk_a->max_size <= 5)
		sort_small_stack(stk_a, stk_b);
	else
		sort_big_stack(stk_a, stk_b);
	end(stk_a, stk_b, 0);
}
