/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_pressed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:18:16 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 15:35:10 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

int		key_pressed_game(int keycode, t_control *ctrl)
{
	if (keycode == XK_Escape)
	{
		mlx_do_key_autorepeaton(ctrl->win->ml);
		mlx_destroy_window(ctrl->win->ml, ctrl->win->win);
		return (-1);
	}
	if (keycode == XK_w)
		ctrl->player->m_front = false;
	if (keycode == XK_a)
		ctrl->player->m_left = false;
	if (keycode == XK_s)
		ctrl->player->m_back = false;
	if (keycode == XK_d)
		ctrl->player->m_right = false;
	return (0);
}