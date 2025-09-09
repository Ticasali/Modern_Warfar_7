/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solo_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:11:09 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 14:12:37 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/solo.h"


void	solo_loop(t_control *ctrl)
{
	mlx_hook(ctrl->win->win, 2, 1L<<0, escape_touch_solo, ctrl);
	mlx_hook(ctrl->win->win, ButtonPress, ButtonPressMask, mouse_input_solo, ctrl);
	mlx_loop_hook(ctrl->win->ml, solo_render, ctrl);
	mlx_loop(ctrl->win->ml);
	if (ctrl->solo->statement == 1)
	{
		mlx_reset(ctrl->win->ml);
		mlx_clear_window(ctrl->win->ml, ctrl->win->win);
		load_new_game(ctrl);
	}
//	if (menu->statement == 2)
//		Multi Menu
	if (ctrl->solo->statement == 3)
	{
		//Astro free
		return ;
	}
}

int		escape_touch_solo(int keycode, t_control *ctrl)
{
	if (keycode == XK_Escape)
		ctrl->solo->statement = 3;
	return (0);
}
