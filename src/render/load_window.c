/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:42:01 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 10:42:42 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

bool	load_window(t_window	*wind)
{
	wind->ml = mlx_init();
	if (wind->ml == NULL)
		return (false);
	wind->win = mlx_new_window(wind->ml, 3072, 1728, "Mordern Warfare 7");	//1728
	if (wind->win == NULL)
		return (false);
	return (true);
}
