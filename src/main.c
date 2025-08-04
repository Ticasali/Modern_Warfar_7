/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 10:06:37 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 14:58:29 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

int		main(int ac, char **av)
{
	t_control	*ctrl;

	if (check_arg(ac, av) == true)
		return (print_error("Error\n Bad Arguments\n"));
	ctrl = malloc(sizeof(t_control));
	if (ctrl == NULL)
		return (-1);
	if (check_parsing(av[1], &ctrl->data) == false)
		return (print_error("Error\n Bad Data\n"));
	if (load_structure(ctrl) == false)
		return (print_error("Error\n Bad Data\n"));
	game(ctrl);
}
