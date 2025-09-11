/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:54:40 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 22:12:31 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	mlx_draw_line(t_window *window, double x_start, double x_end,
		double y_start, double y_end)
{
	int		pixel;
	double	delta_x;
	double	delta_y;

	delta_x = x_end - x_start;
	delta_y = y_end - y_start;
	pixel = sqrt((delta_x * delta_x) + (delta_y * delta_y));
	while (pixel >= 0)
	{
		mlx_pixel_put(window->ml, window->win, x_start, y_start, 0xFFFFFF);
		x_start += delta_x;
		y_start += delta_y;
		pixel--;
	}
}
