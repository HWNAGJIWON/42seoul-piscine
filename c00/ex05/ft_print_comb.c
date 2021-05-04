/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 17:59:06 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/03/29 13:19:38 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	print(int a, int b, int c);

void	print(int a, int b, int c)
{
	char aa;
	char bb;
	char cc;

	aa = a;
	bb = b;
	cc = c;
	write(1, &aa, 1);
	write(1, &bb, 1);
	write(1, &cc, 1);
	if (a == 55 && b == 56 && c == 57)
	{
	}
	else
	{
		write(1, &",", 1);
		write(1, &" ", 1);
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
