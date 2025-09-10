/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solo_render.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:11:47 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 12:30:17 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/utils.h"
# include "../include/solo.h"
# include "../include/turbolibx.h"

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
		solo_animation_button(ctrl);
		ctrl->solo->time = time;
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->solo->background->sprite[ctrl->solo->background->frame_actual], 0, 0);
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->solo->new->sprite[ctrl->solo->new->frame_actual], 400, 300);
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->solo->continu->sprite[ctrl->solo->continu->frame_actual], 400, 500);
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->solo->home->sprite[ctrl->solo->home->frame_actual], 400, 700);
		increase_animation_frame(ctrl->solo->background);
	}
	if (ctrl->solo->statement == 3 || ctrl->solo->statement == 1)
		mlx_loop_end(ctrl->win->ml);	
	return (0);
}
