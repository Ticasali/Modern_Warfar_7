/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_pressed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:18:16 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 20:26:18 by ticasali         ###   ########.fr       */
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
		ctrl->player->m_front = true;
	if (keycode == XK_q)
		ctrl->player->m_left = true;
	if (keycode == XK_s)
		ctrl->player->m_back = true;
	if (keycode == XK_d)
		ctrl->player->m_right = true;
	if (keycode == XK_a)
		ctrl->player->t_left = true;
	if (keycode == XK_e)
		ctrl->player->t_right = true;
	return (0);
}
