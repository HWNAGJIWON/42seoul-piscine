/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:43:57 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/10 22:23:20 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_is_prime(int nb)
{
	unsigned long	i;
	unsigned long	nb2;

	nb2 = nb;
	i = 2;
	if (nb <= 1)
		return (0);
	while (nb2 >= i * i)
	{
		if (nb2 % i == 0)
			return (0);
		i++;
	}
	return (1);
}
