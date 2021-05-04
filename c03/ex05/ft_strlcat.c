/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:11:17 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/07 20:48:26 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		s_strlen(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		s_len;
	unsigned int		d_len;
	unsigned int		i;
	unsigned int		j;

	s_len = s_strlen(src);
	d_len = s_strlen(dest);
	if (d_len <= size)
		return (size + s_len);
	i = d_len;
	j = 0;
	while (src[j] && (i + j + 1 < size))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (s_len + d_len);
}
