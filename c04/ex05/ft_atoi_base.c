/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 12:51:20 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/10 19:36:25 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			g_baselen;
char		*g_base;

int			is_space(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

int			yes_duplicate(void)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (g_base[i])
	{
		j = i + 1;
		if (is_space(g_base[i]) || g_base[i] == '+' \
				|| g_base[i] == '-')
			return (1);
		while (g_base[j] != 0)
		{
			if (g_base[i] == g_base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int			in_the_base(char str)
{
	int		i;

	i = 0;
	while (g_base[i])
	{
		if (g_base[i] == str)
			return (i);
		i++;
	}
	return (-1);
}

int			ft_atoi(char *str)
{
	int		res;
	int		n;

	n = 1;
	res = 0;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			n *= -1;
		str++;
	}
	while (in_the_base(*str) > -1)
	{
		res = res * g_baselen + in_the_base(*str);
		str++;
	}
	return (res * n);
}

int			ft_atoi_base(char *str, char *base)
{
	int		i;

	g_base = base;
	i = 0;
	while (g_base[i])
		i++;
	g_baselen = i;
	if (yes_duplicate() || g_baselen <= 1)
		return (0);
	return (ft_atoi(str));
}
