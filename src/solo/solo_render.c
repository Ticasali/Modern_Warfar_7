/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solo_render.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:11:47 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 14:43:04 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/utils.h"

int	solo_render(t_control *ctrl)
{
	double	time;
	double	test;

	time = get_time();
	test = 0.2;
	if ((time - test) > ctrl->solo->time)
	{
		mlx_mouse_get_pos(ctrl->win->ml, ctrl->win->win,
			&ctrl->solo->x_mouse, &ctrl->solo->y_mouse);
//		menu_animation_button(ctrl);
		ctrl->solo->time = time;
//		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
//			ctrl->solo->background[ctrl->solo->actual_frame], 0, 0);
		if (ctrl->solo->background->frame_actual < 6)
			++ctrl->solo->background->frame_actual;
		else
			ctrl->solo->background->frame_actual = 0;
	}
	if (ctrl->solo->statement == 3 || ctrl->solo->statement == 1)
		mlx_loop_end(ctrl->win->ml);	
	return (0);
}
