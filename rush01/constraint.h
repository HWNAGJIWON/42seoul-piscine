/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuhan <seuhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:41:34 by seuhan            #+#    #+#             */
/*   Updated: 2021/04/04 21:10:08 by seuhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONSTRAINT_H
# define CONSTRAINT_H

# define UP 0
# define DOWN 1
# define LEFT 2
# define RIGHT 3

typedef struct	s_constr
{
	int	size;
	int	*v;
}				t_constr;

t_constr		create_constraint(int size, char *str, int offset);

#endif
