/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:06:37 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/03 10:18:31 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

int		main(int ac, char **av)
{
	t_data	data;

	if (check_arg(ac, av) == true)
		return (print_error("Error\n Bad Arguments\n"));
	if (check_parsing(av[1], &data) == false)
		return (print_error("Error\n Bad Data\n"));
}