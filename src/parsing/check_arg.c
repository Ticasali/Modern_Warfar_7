/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 05:32:55 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/03 10:18:56 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

bool	check_arg(int ac, char **av)
{
	if (ac != 2)
		return (false);
	if (check_cub_extension(av[1]) == false)
		return (false);
	return (true);
}

bool	check_cub_extension(char *str)
{
	size_t	ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		if (str[ct] == '.')
			if (compare_extension(&str[ct], ".cub") == true)
				return (true);
		++ct;
	}
	return (false);
}
