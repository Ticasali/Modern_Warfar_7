/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_render.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:05:29 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 18:25:08 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/utils.h"
#include "../include/turbolibx.h"
#include "../include/setting.h"

int	setting_render(t_control *ctrl)
{
	double	time;
	double	test;

	time = get_time();
	test = 0.1;
	if ((time - test) > ctrl->setting->time)
	{
		mlx_mouse_get_pos(ctrl->win->ml, ctrl->win->win,
			&ctrl->setting->x_mouse, &ctrl->setting->y_mouse);
		ctrl->setting->time = time;
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->setting->background->sprite[ctrl->setting->background->frame_actual],
			0, 0);
		setting_button_render(ctrl);
		increase_animation_frame(ctrl->setting->background);
	}
	if (ctrl->setting->statement == 1 || ctrl->setting->statement == 3)
		mlx_loop_end(ctrl->win->ml);
	return (0);
}
