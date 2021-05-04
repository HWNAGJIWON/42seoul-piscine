/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:53:03 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/15 03:51:18 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int							ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char						*ft_strdup(char *src)
{
	char	*point;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	point = malloc(sizeof(char) * len + 1);
	if (point == NULL)
		return (0);
	while (src[i])
	{
		point[i] = src[i];
		i++;
	}
	point[i] = '\0';
	return (point);
}

struct s_stock_str			*ft_strs_to_tab(int ac, char **av)
{
	int						i;
	struct s_stock_str		*arr;

	i = 0;
	arr = (struct s_stock_str*)malloc(sizeof(struct s_stock_str) * (ac + 1));
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i] = (struct s_stock_str){0, 0, 0};
	return (arr);
}
