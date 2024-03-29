/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 13:56:20 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/05 20:37:01 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(('a' <= str[i] && str[i] <= 'z') \
				|| ('A' <= str[i] && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
