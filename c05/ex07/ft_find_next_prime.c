/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:24:00 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/11 00:25:49 by jiwhwang         ###   ########.fr       */
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

int					ft_find_next_prime(int nb)
{
	int				i;

	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
