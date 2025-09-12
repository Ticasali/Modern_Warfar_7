/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_input_setting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:06:08 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 22:21:55 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

int	mouse_input_setting(int button, int x, int y, t_control *ctrl)
{
	if (button == 1)
	{
		if ((x >= 500 && x <= 600) && (y >= 150 && y <= 200))
			ctrl->setting->statement = 1;
		if ((x >= 500 && x <= 600) && (y >= 250 && y <= 300))
			ctrl->setting->statement = 2;
		if ((x >= 500 && x <= 600) && (y >= 350 && y <= 400))
			ctrl->setting->statement = 3;
		if (x >= 1678)
		{
			
		}
	}
	if (button == 4)
	{
		if (ctrl->setting->scroll >= 30)
			ctrl->setting->scroll -= 30;
		else
			ctrl->setting->scroll = 0;
	}
	if (button == 5)
	{
		if (ctrl->setting->scroll <= 520)
			ctrl->setting->scroll += 30;
		else
			ctrl->setting->scroll = 550;
	}
	return (0);
}
