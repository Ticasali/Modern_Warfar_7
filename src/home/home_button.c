/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_button.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:59:12 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 22:01:41 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/home.h"
#include "../include/turbolibx.h"

void	home_animation_button(t_control *ctrl)
{
	if (ctrl->home->x_mouse >= 400 && ctrl->home->x_mouse <= 700
		&& ctrl->home->y_mouse >= 300 && ctrl->home->y_mouse <= 400)
	{
		increase_animation_frame(ctrl->home->solo);
		reset_animation_frame(ctrl->home->multi);
		reset_animation_frame(ctrl->home->quit);
	}
	else if (ctrl->home->x_mouse >= 400 && ctrl->home->x_mouse <= 700
		&& ctrl->home->y_mouse >= 500 && ctrl->home->y_mouse <= 600)
	{
		increase_animation_frame(ctrl->home->multi);
		reset_animation_frame(ctrl->home->solo);
		reset_animation_frame(ctrl->home->quit);
	}
	else if (ctrl->home->x_mouse >= 400 && ctrl->home->x_mouse <= 700
		&& ctrl->home->y_mouse >= 700 && ctrl->home->y_mouse <= 800)
	{
		increase_animation_frame(ctrl->home->quit);
		reset_animation_frame(ctrl->home->solo);
		reset_animation_frame(ctrl->home->multi);
	}
	else
		home_animation_button_reset(ctrl);
}

void	home_animation_button_reset(t_control *ctrl)
{
	reset_animation_frame(ctrl->home->solo);
	reset_animation_frame(ctrl->home->multi);
	reset_animation_frame(ctrl->home->quit);
}
