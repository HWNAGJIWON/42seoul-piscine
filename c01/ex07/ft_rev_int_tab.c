/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 22:18:29 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/03/31 22:22:10 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int end;
	int temp1;
	int temp2;

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		temp1 = tab[start];
		temp2 = tab[end];
		tab[start] = temp2;
		tab[end] = temp1;
		start++;
		end--;
	}
}
