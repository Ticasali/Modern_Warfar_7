/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:17:44 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 17:19:22 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/turbolibx.h"
# include "../include/home.h"

void	home_loop(t_control *ctrl)
{
	mlx_hook(ctrl->win->win, 2, 1L<<0, escape_touch_home, ctrl);
	mlx_hook(ctrl->win->win, ButtonPress, ButtonPressMask, mouse_input_home, ctrl);
	mlx_loop_hook(ctrl->win->ml, home_render, ctrl);
	mlx_loop(ctrl->win->ml);
	/*
	if (ctrl->home->statement == 1)
	{
		mlx_reset(ctrl->win->ml);
		mlx_clear_window(ctrl->win->ml, ctrl->win->win);
//		load_new_game(ctrl);
	}
//	if (menu->statement == 2)
//		Multi Menu
	if (ctrl->home->statement == 3)
	{
		//Astro free
		return ;
	}
		*/
}

int		escape_touch_home(int keycode, t_control *ctrl)
{
	if (keycode == XK_Escape)
		ctrl->home->statement = 3;
	return (0);
}
