/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:47:08 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/14 12:36:20 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*res;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	len = i;
	res = (char*)malloc(sizeof(*res) * len + 1);
	if (res == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
