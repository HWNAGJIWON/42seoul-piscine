/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 00:53:19 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/04 06:45:58 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isnum(char before)
{
	if (48 <= before && before <= 57)
		return (1);
	return (0);
}

int		isla(char before)
{
	if (97 <= before && before <= 122)
		return (1);
	return (0);
}

int		isua(char before)
{
	if (65 <= before && before <= 90)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	before;

	i = 0;
	while (str[i] != 0)
	{
		if (i > 0)
			before = str[i - 1];
		if (i == 0 || !(isnum(before) || isla(before) || isua(before)))
		{
			if (97 <= str[i] && str[i] <= 122)
				str[i] -= 32;
		}
		else if (isnum(before) || isua(before) || isla(before))
		{
			if ('A' <= str[i] && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
