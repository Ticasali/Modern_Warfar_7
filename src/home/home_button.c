/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home_button.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:59:12 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/08 18:08:47 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"

void	menu_animation_button(t_control *ctrl)
{
	if (ctrl->mes->xmouse >= 500 && ctrl->mes->xmouse <= 600
		&& ctrl->mes->ymouse >= 150 && ctrl->mes->ymouse <= 200)
	{
		menu_animation_button_incr(ctrl, 0);
		ctrl->mes->framebutton[1] = 0;
		ctrl->mes->framebutton[2] = 0;
	}
	else if (ctrl->mes->xmouse >= 500 && ctrl->mes->xmouse <= 600
		&& ctrl->mes->ymouse >= 250 && ctrl->mes->ymouse <= 300)
	{
		menu_animation_button_incr(ctrl, 1);
		ctrl->mes->framebutton[0] = 0;
		ctrl->mes->framebutton[2] = 0;
	}
	else if (ctrl->mes->xmouse >= 500 && ctrl->mes->xmouse <= 600
		&& ctrl->mes->ymouse >= 350 && ctrl->mes->ymouse <= 400)
	{
		menu_animation_button_incr(ctrl, 2);
		ctrl->mes->framebutton[0] = 0;
		ctrl->mes->framebutton[1] = 0;
	}
	else
		menu_animation_button_incr(ctrl, 3);
}

void	menu_animation_button_incr(t_control *ctrl, int check)
{
	if (check == 0)
	{
		if (ctrl->mes->framebutton[0] < 2)
			++ctrl->mes->framebutton[0];
		else
			ctrl->mes->framebutton[0] = 0;
	}
	else if (check == 1)
	{
		if (ctrl->mes->framebutton[1] < 2)
			++ctrl->mes->framebutton[1];
		else
			ctrl->mes->framebutton[1] = 0;
	}
	else if (check == 2)
	{
		if (ctrl->mes->framebutton[2] < 2)
			++ctrl->mes->framebutton[2];
		else
			ctrl->mes->framebutton[2] = 0;
	}
	else
		menu_animation_button_reset(ctrl);
}

void	menu_animation_button_reset(t_control *ctrl)
{
	ctrl->mes->framebutton[0] = 0;
	ctrl->mes->framebutton[1] = 0;
	ctrl->mes->framebutton[2] = 0;
}
