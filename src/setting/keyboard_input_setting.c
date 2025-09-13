/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard_input_setting.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 17:59:19 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/13 14:08:49 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"
#include "../include/setting.h"
#include "../include/utils.h"

int	keyboard_input_setting(int keycode, t_control *ctrl)
{
	if (keycode == XK_Escape)
		ctrl->setting->statement = 3;
	if (keycode == XK_Up)
	{
		if (ctrl->setting->scroll >= 30)
			ctrl->setting->scroll -= 30;
		else
			ctrl->setting->scroll = 0;
	}
	if (keycode == XK_Down)
	{
		if (ctrl->setting->scroll <= 520)
			ctrl->setting->scroll += 30;
		else
			ctrl->setting->scroll = 550;
	}
	ft_putnbr(keycode);
	return (0);
}
