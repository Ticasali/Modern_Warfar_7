/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_button.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:59:12 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 12:03:20 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"

void	menu_animation_button(t_control *ctrl)
{
	if (ctrl->home->x_mouse >= 500 && ctrl->home->x_mouse <= 600
		&& ctrl->home->y_mouse >= 150 && ctrl->home->y_mouse <= 200)
	{
		increase_animation_frame(ctrl->home->solo);
		reset_animation_frame(ctrl->home->multi);
		reset_animation_frame(ctrl->home->quit);
	}
	else if (ctrl->home->x_mouse >= 500 && ctrl->home->x_mouse <= 600
		&& ctrl->home->y_mouse >= 250 && ctrl->home->y_mouse <= 300)
	{
		increase_animation_frame(ctrl->home->multi);
		reset_animation_frame(ctrl->home->solo);
		reset_animation_frame(ctrl->home->quit);
	}
	else if (ctrl->home->x_mouse >= 500 && ctrl->home->x_mouse <= 600
		&& ctrl->home->y_mouse >= 350 && ctrl->home->y_mouse <= 400)
	{
		increase_animation_frame(ctrl->home->quit);
		reset_animation_frame(ctrl->home->multi);
	}
	else
		menu_animation_button_reset(ctrl);
}

void	menu_animation_button_reset(t_control *ctrl)
{
	reset_animation_frame(ctrl->home->solo);
	reset_animation_frame(ctrl->home->multi);
	reset_animation_frame(ctrl->home->quit);
}
