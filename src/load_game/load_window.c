/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:42:01 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 13:40:06 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	*free_window(t_window *wind)
{
	if (wind == NULL)
		return (NULL);
	else if (wind->ml == NULL)
	{
		free(wind);
		return (NULL);
	}
	else if (wind->win == NULL)
	{
		free(wind->ml);
		free(wind);
		return (NULL);
	}
	return (wind);
}

t_window	*load_window(void)
{
	t_window	*wind;

	wind = malloc(sizeof(t_window));
	if (wind == NULL)
		return (free_window(wind));
	wind->ml = mlx_init();
	if (wind->ml == NULL)
		return (free_window(wind));
	wind->win = mlx_new_window(wind->ml, 1728, 960, "Mordern Warfare 7");	//1728
	if (wind->win == NULL)
		return (free_window(wind));
	return (wind);
}
