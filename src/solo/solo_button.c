/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solo_button.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 11:45:32 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 22:11:29 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/solo.h"
#include "../include/turbolibx.h"

void	solo_animation_button(t_control *ctrl)
{
	if (ctrl->solo->x_mouse >= 400 && ctrl->solo->x_mouse <= 700
		&& ctrl->solo->y_mouse >= 300 && ctrl->solo->y_mouse <= 400)
	{
		increase_animation_frame(ctrl->solo->new);
		reset_animation_frame(ctrl->solo->continu);
		reset_animation_frame(ctrl->solo->home);
	}
	else if (ctrl->solo->x_mouse >= 400 && ctrl->solo->x_mouse <= 700
		&& ctrl->solo->y_mouse >= 500 && ctrl->solo->y_mouse <= 600)
	{
		increase_animation_frame(ctrl->solo->continu);
		reset_animation_frame(ctrl->solo->new);
		reset_animation_frame(ctrl->solo->home);
	}
	else if (ctrl->solo->x_mouse >= 400 && ctrl->solo->x_mouse <= 700
		&& ctrl->solo->y_mouse >= 700 && ctrl->solo->y_mouse <= 800)
	{
		increase_animation_frame(ctrl->solo->home);
		reset_animation_frame(ctrl->solo->new);
		reset_animation_frame(ctrl->solo->continu);
	}
	else
		solo_animation_button_reset(ctrl);
}

void	solo_animation_button_reset(t_control *ctrl)
{
	reset_animation_frame(ctrl->solo->home);
	reset_animation_frame(ctrl->solo->new);
	reset_animation_frame(ctrl->solo->continu);
}
