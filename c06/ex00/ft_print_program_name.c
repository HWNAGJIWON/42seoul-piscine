/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwhwang <jiwhwang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:44:44 by jiwhwang          #+#    #+#             */
/*   Updated: 2021/04/11 07:59:09 by jiwhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char *argv[])
{
	--argc;
	while (*argv[argc])
	{
		write(1, argv[argc]++, 1);
	}
	write(1, "\n", 1);
}
