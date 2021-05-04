/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 02:27:59 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/07 17:41:35 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		sstrlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		str_len;
	int		to_find_len;
	char	*start;
	char	*find;

	start = str;
	find = to_find;
	str_len = sstrlen(str);
	to_find_len = sstrlen(to_find);
	while (*str != 0)
	{
		if (*str == *find)
			find++;
		else if (*find == 0)
			break ;
		else
			find = to_find;
		str++;
	}
	if (*find != 0)
		return (0);
	return (str - to_find_len);
}
