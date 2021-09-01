/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:43 by tcordonn          #+#    #+#             */
/*   Updated: 2021/09/01 10:12:23 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// gerer les negatifs
// gerer int max

void	print_stack(t_stack *stk)
{
	int x;

	x = 0;
	while (x != stk->max_size)
		printf("%d\n", stk->items[x++]);
}

void	end(t_stack *stk_a, t_stack *stk_b)
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
	exit(EXIT_FAILURE);
}

int		main(int argc, char **argv) // check les doublons
{
	t_stack		*stk_a;
	t_stack		*stk_b;

	(void)argc;
	stk_b = NULL;
	stk_a = malloc(sizeof(t_stack));
	if (stk_a == NULL)
		end(stk_a, stk_b);
	stk_b = malloc(sizeof(t_stack));
	if (stk_b == NULL)
		end(stk_a, stk_b);
	if (!(init_stacks(stk_a, stk_b, argv)))
	{
		ft_putstr_fd("Error\n", 2);
		end(stk_a, stk_b);
		return (1);
	}
	/*is_sort(); à coder
	printf("we can begin\n");
	swap_a(stk_a);
	swap_a(stk_a);
	print_stack(stk_a);*/
	return (0);
}
