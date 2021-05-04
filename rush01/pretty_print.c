/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretty_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuhan <seuhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 21:54:43 by seuhan            #+#    #+#             */
/*   Updated: 2021/04/04 21:11:28 by seuhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_utils.h"

void	print_grid(int **grid, int size)
{
	int	index;
	int	jndex;

	index = 0;
	while (index < size)
	{
		jndex = 0;
		while (jndex < size)
		{
			str_write_char((char)(grid[index][jndex] + '0'));
			if (jndex != size - 1)
				str_write(" ");
			jndex++;
		}
		if (index != size - 1)
			str_write("\n");
		index++;
	}
}
