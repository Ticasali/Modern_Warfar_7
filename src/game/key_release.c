/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_release.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:23:31 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 20:26:38 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

int		key_release_game(int keycode, t_control *ctrl)
{
	if (keycode == XK_w)
		ctrl->player->m_front = false;
	if (keycode == XK_q)
		ctrl->player->m_left = false;
	if (keycode == XK_s)
		ctrl->player->m_back = false;
	if (keycode == XK_d)
		ctrl->player->m_right = false;
	if (keycode == XK_a)
		ctrl->player->t_left = false;
	if (keycode == XK_e)
		ctrl->player->t_right = false;
	return (0);
}
