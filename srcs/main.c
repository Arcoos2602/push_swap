/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:33:43 by tcordonn          #+#    #+#             */
/*   Updated: 2021/09/02 17:18:59 by tcordonn         ###   ########.fr       */
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

int		main(int argc, char **argv) // check int_max int_min
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
	printf("aaaa\n");
	print_stack(stk_a);
	printf("bbbb\n");
	print_stack(stk_b);
	rotate_a(stk_a);
	printf("aaaa\n");
	print_stack(stk_a);
	r_rotate_a(stk_a);
	printf("aaaa\n");
	print_stack(stk_a);
	printf("bbbb\n");
	print_stack(stk_b);
	end (stk_a, stk_b, 0);
	return (0);
}
