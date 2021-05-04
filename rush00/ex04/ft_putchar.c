/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 02:22:05 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/03/28 02:46:16 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || ((i > 1 && j > 1) && (i == x && j == y)))
	{
		write(1, &"A", 1);
	}
	else if ((i == x && j == 1) || (i == 1 && j == y))
	{
		write(1, &"C", 1);
	}
	else if ((x == 1 && j == y) || (i == x && y == 1))
	{
		write(1, &"C", 1);
	}
	else if ((j == 1) || (j == y) || (i == 1) || (i == x))
	{
		write(1, &"B", 1);
	}
	else
	{
		write(1, &" ", 1);
	}
}