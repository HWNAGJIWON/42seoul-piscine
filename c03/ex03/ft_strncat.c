/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42.seoul>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 01:27:55 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/07 13:36:39 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, unsigned int n)
{
	char			*temp;
	unsigned int	i;

	i = 0;
	temp = dest;
	while (*dest)
		dest++;
	while (*src && n > i)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (*dest)
	{
		*dest = 0;
		dest++;
	}
	return (temp);
}
