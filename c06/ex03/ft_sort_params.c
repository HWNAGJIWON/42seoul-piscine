/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 02:04:27 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/11 05:56:15 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (*(s1 + i))
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

void		change(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 2;
	while (i < argc)
	{
		j = 2;
		while (j < argc)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) > 0)
			{
				temp = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int			main(int argc, char *argv[])
{
	int		i;

	i = 1;
	if (argc == i)
		return (0);
	change(argc, argv);
	while (i < argc)
	{
		while (*argv[i])
		{
			write(1, argv[i]++, 1);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
