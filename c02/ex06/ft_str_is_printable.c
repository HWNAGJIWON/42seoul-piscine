/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:19:17 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/01 23:25:10 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(32 <= str[i] && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	if (str[i] == 0)
		return (1);
	return (1);
}