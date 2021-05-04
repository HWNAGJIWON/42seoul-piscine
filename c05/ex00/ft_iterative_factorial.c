/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 10:32:07 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/11 02:53:59 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		res;
	int		i;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (nb >= i)
	{
		res *= i;
		i++;
	}
	return (res);
}
