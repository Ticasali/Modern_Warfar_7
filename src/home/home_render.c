/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_render.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:47:38 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 14:06:49 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/utils.h"
# include "../include/home.h"
# include "../include/turbolibx.h"

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
		home_animation_button(ctrl);
		ctrl->home->time = time;
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->home->background->sprite[ctrl->home->background->frame_actual], 0, 0);
		if (ctrl->home->background->frame_actual < ctrl->home->background->frame_max)
			++ctrl->home->background->frame_actual;
		else
			ctrl->home->background->frame_actual = 0;
	}
	if (ctrl->home->statement == 3 || ctrl->home->statement == 1)
		mlx_loop_end(ctrl->win->ml);	
	return (0);
}
