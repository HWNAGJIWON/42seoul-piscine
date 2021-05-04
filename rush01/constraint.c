/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuhan <seuhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 20:43:31 by seuhan            #+#    #+#             */
/*   Updated: 2021/04/04 21:06:03 by seuhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "constraint.h"
#include "is.h"

t_constr	create_constraint(int size, char *str, int offset)
{
	int			index;
	t_constr	constraint;

	constraint.size = size;
	constraint.v = (int *)malloc((size + 1) * sizeof(int));
	index = 0;
	while (index < size)
	{
		if (!*str)
			break ;
		if (is_number(*str))
		{
			if (offset)
				offset--;
			else
			{
				constraint.v[index] = *str - '0';
				index++;
			}
		}
		str++;
	}
	return (constraint);
}
