/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuhan <seuhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:11:42 by seuhan            #+#    #+#             */
/*   Updated: 2021/04/04 21:03:29 by seuhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "boolean.h"
# include "constraint.h"

# define DIR_L_T_R 1
# define DIR_R_T_L -1
# define DIR_U_T_D 1
# define DIR_D_T_U -1

t_bool	check_grid_validity(int **grid, int size, t_constr cnstr[4]);

#endif
