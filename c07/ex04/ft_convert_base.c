/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:07:24 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/15 04:13:33 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		is_space(char *c);
int		find_num(char *str, char *base, int base_num);
int		ft_atoi_base(char *str, char *base);

char	*g_res;
int		g_sign;

int		vaild(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || is_space(&base[i]))
			return (0);
		if (base[i])
		{
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	putnbr_str(long nbr, char *base, int base_num, int count)
{
	if (nbr >= base_num)
		putnbr_str((nbr / base_num), base, base_num, count - 1);
	g_res[count] = base[(nbr % base_num)];
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_num;
	int count;
	int tmp;

	base_num = ft_strlen(base);
	count = 1;
	if (nbr < 0)
	{
		count++;
		nbr *= -1;
	}
	tmp = nbr;
	while (tmp >= base_num)
	{
		count++;
		tmp = tmp / base_num;
	}
	g_res = malloc(sizeof(char) * count);
	if (!g_res)
		return ;
	if (g_sign == -1)
		g_res[0] = '-';
	putnbr_str((long)nbr, base, base_num, count - 1);
	g_res[count] = 0;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int num;

	if (!vaild(base_from) || !vaild(base_to))
		return (0);
	num = ft_atoi_base(nbr, base_from);
	g_sign = num < 0 ? -1 : 1;
	ft_putnbr_base(num, base_to);
	return (g_res);
}
