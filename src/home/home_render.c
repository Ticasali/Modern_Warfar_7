/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_render.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:47:38 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 12:29:02 by ticasali         ###   ########.fr       */
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
	void	*back;
	void	*img;

	time = get_time();
	test = 0.1;
	if ((time - test) > ctrl->home->time)
	{
		//Try Buffer Image
//		img = mlx_new_image(ctrl->win->ml, 1728, 960);
//		back = load_image(ctrl->win, "./texture/back.xpm", 1728, 960);
//		put_img_to_img(load_transparency(img, 1728, 960),
//			load_transparency(back, 1728, 960), 0, 0);
//		put_img_to_img(load_transparency(back, 1728, 960),
//			load_transparency(ctrl->home->background->sprite[ctrl->home->background->frame_actual], 1728, 960), 0, 0);
//	mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
//			back, 0, 0);
//		mlx_destroy_image(ctrl->win->ml, img);
//		mlx_destroy_image(ctrl->win->ml, back);
		//
		mlx_mouse_get_pos(ctrl->win->ml, ctrl->win->win,
			&ctrl->home->x_mouse, &ctrl->home->y_mouse);
		home_animation_button(ctrl);
		ctrl->home->time = time;
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->home->background->sprite[ctrl->home->background->frame_actual], 0, 0);
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->home->solo->sprite[ctrl->home->solo->frame_actual], 400, 300);
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->home->multi->sprite[ctrl->home->multi->frame_actual], 400, 500);
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->home->quit->sprite[ctrl->home->quit->frame_actual], 400, 700);
		increase_animation_frame(ctrl->home->background);
	}
	if (ctrl->home->statement == 3 || ctrl->home->statement == 1)
	{
		mlx_loop_end(ctrl->win->ml);
	}
	return (0);
}
