/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce_search.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuhan <seuhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:25:32 by seuhan            #+#    #+#             */
/*   Updated: 2021/04/04 21:09:31 by seuhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRUTEFORCE_SEARCH_H
# define BRUTEFORCE_SEARCH_H

# include "boolean.h"
# include "constraint.h"

t_bool	search_solution(int **grid, int size, t_constr cnstr[4]);

#endif
