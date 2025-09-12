/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard_input_setting.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 17:59:19 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 19:37:50 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"
#include "../include/setting.h"

int	keyboard_input_setting(int keycode, t_control *ctrl)
{
	if (keycode == XK_Escape)
		ctrl->setting->statement = 3;
	if (keycode == XK_Up)
		ctrl->setting->scroll -= 30;
	if (keycode == XK_Down)
		ctrl->setting->scroll += 30;
	return (0);
}
