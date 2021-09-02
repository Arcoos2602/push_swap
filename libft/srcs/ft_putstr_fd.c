/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcordonn <tcordonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:28:13 by tcordonn          #+#    #+#             */
/*   Updated: 2019/10/11 17:20:43 by tcordonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = -1;
	if (s)
		while (s[++i])
			write(fd, &s[i], 1);
}
