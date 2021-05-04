/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:50:14 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/03/28 03:02:00 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			ft_putchar(i, j, x, y);
			i++;
		}
		write(1, &"\n", 1);
		j++;
	}
}
