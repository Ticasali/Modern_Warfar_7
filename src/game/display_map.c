/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:47:05 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 14:02:46 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	display_map(t_control *ctrl)
{
	size_t	y;
	size_t	x;

	y = 0;
	while (ctrl->data->map[y] != NULL)
	{
		x = 0;
		while (ctrl->data->map[y][x] != '\0')
		{
			if (ctrl->data->map[y][x] == '1')
				mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
					ctrl->data->north, x * 64, y * 64);
			if (ctrl->data->map[y][x] == '0')
				mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
					ctrl->data->west, x * 64, y * 64);
			++x;
		}
		++y;
	}
}

void	display_player_in_map(t_control *ctrl)
{
	mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
					ctrl->data->south,
					ctrl->player->pos_x * 10, ctrl->player->pos_y * 10);
}
