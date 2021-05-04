/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:39:31 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/11 05:47:50 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned long	value;
	unsigned long	i;

	value = (unsigned long)nb;
	i = 1;
	if (nb < 1)
		return (0);
	while (value > i * i)
	{
		++i;
	}
	if (value == i * i)
		return ((int)i);
	return (0);
}
