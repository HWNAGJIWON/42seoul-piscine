/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:07:03 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/10 15:28:53 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_duplicate(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		sstrlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(long nbr, int base_len, char *base_arr)
{
	char	charr;

	if (nbr >= 0)
	{
		if (nbr / base_len > 0)
			ft_putnbr(nbr / base_len, base_len, base_arr);
		charr = base_arr[nbr % base_len];
		write(1, &charr, 1);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(-1 * nbr, base_len, base_arr);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = sstrlen(base);
	if (sstrlen(base) == 0 || sstrlen(base) == 1 \
			|| check_duplicate(base))
		return ;
	base_len = sstrlen(base);
	ft_putnbr((long)nbr, base_len, base);
	return ;
}
