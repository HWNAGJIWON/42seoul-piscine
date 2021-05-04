/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 22:01:29 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/05 22:01:59 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_hex[17] = "0123456789abcdef";

void	ft_divideback(int *div, int *mod, char ch)
{
	*div = ch / 16;
	*mod = ch % 16;
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		mod;
	int		div;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			ft_divideback(&div, &mod, str[i]);
			write(1, "\\", 1);
			write(1, &g_hex[div], 1);
			write(1, &g_hex[mod], 1);
		}
		i++;
	}
}
