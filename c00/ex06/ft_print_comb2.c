/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:12:10 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/03/31 09:47:19 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a)
{
	char a1;
	char a2;

	a1 = a / 10 + 48;
	a2 = a % 10 + 48;
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, &" ", 1);
}

void	print2(int a, int b)
{
	char b1;
	char b2;

	b1 = b / 10 + 48;
	b2 = b % 10 + 48;
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (a == 98 && b == 99)
	{
	}
	else
	{
		write(1, &", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a < b)
			{
				print(a);
				print2(a, b);
				b++;
			}
		}
		a++;
	}
}
