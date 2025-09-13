/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_loop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:04:36 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/13 14:18:13 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"
#include "../include/setting.h"

void	setting_loop(t_control *ctrl)
{
//	mlx_hook(ctrl->win->win, 2, 1L << 0, escape_touch_setting, ctrl);
	mlx_hook(ctrl->win->win, ButtonPress,
		ButtonPressMask, mouse_input_setting, ctrl);
	mlx_hook(ctrl->win->win, ButtonRelease,
		ButtonReleaseMask, mouse_release_setting, ctrl);
	mlx_hook(ctrl->win->win, KeyPress, KeyPressMask, keyboard_input_setting ,ctrl);
	mlx_loop_hook(ctrl->win->ml, setting_render, ctrl);
	mlx_loop(ctrl->win->ml);
	if (ctrl->setting->statement == 1)
	{
		mlx_reset(ctrl->win->ml);
		mlx_clear_window(ctrl->win->ml, ctrl->win->win);
//		load_new_game(ctrl);
	}
//	if (menu->statement == 2)
//		Multi Menu
	if (ctrl->setting->statement == 3)
	{
		//Astro free
		return ;
	}
}

int	escape_touch_setting(int keycode, t_control *ctrl)
{
	if (keycode == XK_Escape)
		ctrl->setting->statement = 3;
	return (0);
}
