/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_render.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:47:38 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/08 13:02:54 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"

int	home_render(t_control *ctrl)
{
	double	time;
	double	test;

	time = get_time();
	test = 0.2;
	if ((time - test) > ctrl->home->time)
	{
		mlx_mouse_get_pos(ctrl->win->ml, ctrl->win->win,
			&ctrl->home->x_mouse, &ctrl->home->y_mouse);
//		menu_animation_button(ctrl);
		ctrl->home->time = time;
//		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
//			ctrl->home->background[ctrl->home->actual_frame], 0, 0);
		if (ctrl->home->background->frame_actual < 6)
			++ctrl->home->background->frame_actual;
		else
			ctrl->home->background->frame_actual = 0;
	}
	if (ctrl->home->statement == 3 || ctrl->home->statement == 1)
		mlx_loop_end(ctrl->win->ml);	
	return (0);
}
