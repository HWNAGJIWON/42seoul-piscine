/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:53:48 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/03/28 03:18:16 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || ((i > 1 && j > 1) && (i == x && j == y)))
	{
		write(1, &"/", 1);
	}
	else if ((i == x && j == 1) || (i == 1 && j == y))
	{
		write(1, &"\\", 1);
	}
	else if ((x == 1 && j == y) || (i == x && y == 1))
	{
		write(1, &"\\", 1);
	}
	else if (i == 1 || i == x || j == 1 || j == y)
	{
		write(1, &"*", 1);
	}
	else
	{
		write(1, &" ", 1);
	}
}