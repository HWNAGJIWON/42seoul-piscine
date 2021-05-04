/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce_search.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuhan <seuhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 19:43:23 by seuhan            #+#    #+#             */
/*   Updated: 2021/04/04 21:05:33 by seuhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"
#include "constraint.h"
#include "checker.h"
#include "maths.h"

t_bool	fill_grid_row(int *row, int size, int offset)
{
	int	index;
	int	jndex;
	int	power;

	index = 0;
	power = 1;
	while (index < size)
	{
		row[size - 1 - index] = (offset / power) % size + 1;
		power *= size;
		index++;
	}
	index = 0;
	while (index < size)
	{
		jndex = index + 1;
		while (jndex < size)
		{
			if (row[index] == row[jndex])
				return (false);
			jndex++;
		}
		index++;
	}
	return (true);
}

t_bool	recursive_search(int **grid, t_constr cnstr[4], int comb, int row)
{
	int	size;
	int	offset;

	size = cnstr[UP].size;
	if (row >= size)
		return (check_grid_validity(grid, size, cnstr));
	offset = 0;
	while (offset < comb)
	{
		if (fill_grid_row(grid[row], size, offset))
		{
			if (recursive_search(grid, cnstr, comb, row + 1))
				return (true);
		}
		offset++;
	}
	return (false);
}

t_bool	search_solution(int **grid, int size, t_constr cnstr[4])
{
	int	comb_count;

	comb_count = ft_power(size, size);
	return (recursive_search(grid, cnstr, comb_count, 0));
}
