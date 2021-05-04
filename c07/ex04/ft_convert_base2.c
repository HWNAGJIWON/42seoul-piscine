/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:07:53 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/15 04:14:14 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_space(char *c)
{
	if (*c == ' ' || *c == '\n' || *c == '\t' \
			|| *c == '\v' || *c == '\f' || *c == '\r')
		return (1);
	return (0);
}

int		find_num(char *str, char *base, int base_num)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (*str)
	{
		i = 0;
		while (base[i])
		{
			if (*str == base[i])
				break ;
			i++;
		}
		if (!base[i])
			break ;
		result *= base_num;
		result += i;
		str++;
	}
	return (result);
}

int		ft_atoi_base(char *str, char *base)
{
	int base_num;
	int result;
	int sign;

	base_num = ft_strlen(base);
	sign = 1;
	result = 0;
	while (is_space(str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = find_num(str, base, base_num);
	result *= sign;
	return (result);
}
