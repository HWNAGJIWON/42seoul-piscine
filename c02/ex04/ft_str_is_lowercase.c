/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:22:49 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/01 23:21:19 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(97 <= str[i] && str[i] <= 122))
			return (0);
		i++;
	}
	if (str[i] == 0)
		return (1);
	return (1);
}