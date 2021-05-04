/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuhan <seuhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 21:00:57 by seuhan            #+#    #+#             */
/*   Updated: 2021/04/04 21:01:05 by seuhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"
#include "string_utils.h"
#include "is.h"
#include "solver.h"

int		count_numbers(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (is_number(*str))
			count++;
		str++;
	}
	return (count);
}

int		main(int argc, char **argv)
{
	t_bool	error;
	int		nbr_count;
	int		grid_size;

	error = (argc != 2);
	if (!error)
	{
		nbr_count = count_numbers(argv[1]);
		grid_size = nbr_count / 4;
		error = (grid_size < 3 || grid_size > 9 || nbr_count != grid_size * 4);
		if (!error)
			error = !solve(grid_size, argv[1]);
	}
	if (error)
		str_write("Error");
	str_write("\n");
}
