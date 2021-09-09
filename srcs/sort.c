/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:08:49 by tcordonn          #+#    #+#             */
/*   Updated: 2021/09/09 14:04:01 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort(int *simp, int max_size)
{
	int i,c;
	int j;

	i = 0;
	while (i < max_size)
	{
		j = i + 1;
		while (j < max_size)
		{
			if (simp[i] > simp[j])
			{
				c = simp[i];
            	simp[i] = simp[j];
            	simp[j] = c;
			}
			j++;
		}
		i++;
	}
}

int	simplify_stack_a(t_stack *stk)
{
	int	i;
	int	j;
	int	*simp;

	i = -1;
	simp = malloc(sizeof(int) * stk->max_size);
	if (simp == NULL)
		return (0);
	while (++i != stk->max_size)
		simp[i] = stk->items[i];
	sort(simp, stk->max_size);
	i = 0;
	while (i < stk->max_size)
	{
		j = 0;
		while (j < stk->max_size)
		{
			if (stk->items[i] == simp[j])
				stk->items[i] = j;
			j++;
		}
		i++;
	}
	free(simp);
	return (1);
}

int is_sort(t_stack *stk)
{
	int i;
	int	x;

	x = 0;
	i = 0;
	while (i != stk->max_size)
	{
		x = i + 1;
		while (x != stk->max_size && stk->items[i] < stk->items[x])
			x++;
		if (x != stk->max_size && stk->items[i] > stk->items[x])
			return (0);
		i++;
	}
	return (1);
}

void sort_small_stack(t_stack *stk_a, t_stack *stk_b)
{
	(void)stk_a;
	(void)stk_b;
}

void sort_big_stack(t_stack *stk_a, t_stack *stk_b)
{
	int	max;
	int	max_bits;
	int	i;
	int	j;

	
	int x = 0;
	i = 0;
	j = 0;
	max = stk_a->max_size - 1;
	max_bits = 0;
	while ((max >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		while (j < stk_a->max_size)
		{
			if ((stk_a->items[stk_a->top] >> 1)&(1 == 1))
				rotate_a(stk_a);
			else
				push_b(stk_a, stk_b);
			j++;
		}
		while (push_a(stk_a, stk_b))
			;
		x = 0;
		printf("stk_a : \n");
		while (x < stk_a->max_size)
			printf("%d\n", stk_a->items[x++]);
		i++;
	}
}
