/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 04:20:24 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/03/31 22:24:06 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a_t;
	int b_t;

	a_t = *a;
	b_t = *b;
	*a = a_t / b_t;
	*b = a_t % b_t;
}