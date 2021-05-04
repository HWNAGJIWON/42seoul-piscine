/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:38:52 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/01 00:43:13 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		positive(int nb, char *buf, int i)
{
	while (nb > 10)
	{
		buf[i++] = nb % 10 + 48;
		nb = nb / 10;
	}
	buf[i] = nb % 10 + 48;
	return (i);
}

void	print(int i, char *buf)
{
	while (i >= 0)
	{
		write(1, &buf[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		n;
	char	buf[11];

	i = 0;
	n = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		i = positive((nb * -1), buf, i);
		buf[++i] = '-';
		print(i, buf);
	}
	else
	{
		i = positive(nb, buf, i);
		print(i, buf);
	}
}
