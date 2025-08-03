/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:06:37 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/03 05:49:52 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

int		main(int ac, char **av)
{
	t_data	data;

	if (check_arg(ac, av) == true)
		return (error("Error\n Bad Arguments\n"));
	if (check_parsing(av, &data) == false)
		
}