/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_button.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:16:03 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 13:17:56 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/setting.h"
# include "../include/turbolibx.h"

void	setting_animation_button(t_control *ctrl)
{
	if (ctrl->setting->x_mouse >= 400 && ctrl->setting->x_mouse <= 700
		&& ctrl->setting->y_mouse >= 300 && ctrl->setting->y_mouse <= 400)
	{
		increase_animation_frame(ctrl->setting->solo);
		reset_animation_frame(ctrl->setting->multi);
		reset_animation_frame(ctrl->setting->quit);
	}
	else if (ctrl->setting->x_mouse >= 400 && ctrl->setting->x_mouse <= 700
		&& ctrl->setting->y_mouse >= 500 && ctrl->setting->y_mouse <= 600)
	{
		increase_animation_frame(ctrl->setting->multi);
		reset_animation_frame(ctrl->setting->solo);
		reset_animation_frame(ctrl->setting->quit);
	}
	else if (ctrl->setting->x_mouse >= 400 && ctrl->setting->x_mouse <= 700
		&& ctrl->setting->y_mouse >= 700 && ctrl->setting->y_mouse <= 800)
	{
		increase_animation_frame(ctrl->setting->quit);
		reset_animation_frame(ctrl->setting->solo);
		reset_animation_frame(ctrl->setting->multi);
	}
	else
		setting_animation_button_reset(ctrl);
}

void	setting_animation_button_reset(t_control *ctrl)
{
	reset_animation_frame(ctrl->setting->solo);
	reset_animation_frame(ctrl->setting->multi);
	reset_animation_frame(ctrl->setting->quit);
}
