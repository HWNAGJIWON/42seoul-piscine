/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 00:01:18 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/15 04:12:35 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			in_the_base(char s, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == s)
			return (1);
		i++;
	}
	if (s == 0)
		return (1);
	return (0);
}

int			count_num_of_words(char *str, char *charset)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (in_the_base(str[i + 1], charset) == 1 \
				&& in_the_base(str[i], charset) == 0)
			count++;
		i++;
	}
	return (count);
}

void		ft_strcpy(char *dest, char *src, char *charset)
{
	int		i;

	i = 0;
	while (in_the_base(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

void		fill_res(char **res, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (in_the_base(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (in_the_base(str[i + j], charset) == 0)
				j++;
			res[word] = (char*)malloc(sizeof(char) * (j + 1));
			ft_strcpy(res[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

char		**ft_split(char *str, char *charset)
{
	char	**res;
	int		word;

	word = count_num_of_words(str, charset);
	if ((res = (char**)malloc(sizeof(char*) * (word + 1))) == NULL)
		return (NULL);
	res[word] = 0;
	fill_res(res, str, charset);
	return (res);
}
