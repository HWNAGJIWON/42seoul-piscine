/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuhan <seuhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:44:35 by seuhan            #+#    #+#             */
/*   Updated: 2021/04/04 21:04:30 by seuhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"

int	ft_sqrt(int nb, t_bool return_zero_if_float)
{
	unsigned int		sqrt;
	unsigned int		index;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	index = 0;
	while ((sqrt = index * index) <= (unsigned int)nb)
		index++;
	index -= 1;
	if (return_zero_if_float)
		return (index * index == (unsigned int)nb ? index : 0);
	return (index);
}

int	ft_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	result = 1;
	while (power-- > 0)
		result *= nb;
	return (result);
}
