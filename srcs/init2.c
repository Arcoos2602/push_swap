/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:52:10 by tcordonn          #+#    #+#             */
/*   Updated: 2021/09/02 16:09:02 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_int(int check, char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	if (str[i] == '-')
		i++;
	while (str[i] == '0')
		i++;
	while (ft_isdigit(str[i + num]))
		num++;
	if (str[0] == '-')
	{
		if (num >= 10 && (num != 10 || check >= 0 || str[i] > '2'))
			return (0);
	}
	else if (num >= 10 && (num != 10 || check <= 0 || str[i] > '2'))
		return (0);
	return (1);
}

int	count(t_stack *stk_a, char **argv, int *x, int *y)
{
	while (ft_iswhitespace(argv[*x][*y]))
		++*y;
	if (argv[*x][*y] != '\0' &&
		(ft_isdigit(argv[*x][*y]) || argv[*x][*y] == '-'))
	{
		if (argv[*x][*y] == '-' && ft_isdigit(argv[*x][*y + 1]) == 0)
			return (0);
		else
			++*y;
		while (ft_isdigit(argv[*x][*y]))
			++*y;
		stk_a->max_size++;
	}
	else if (argv[*x][*y] != '\0')
		return (0);
	return (1);
}
