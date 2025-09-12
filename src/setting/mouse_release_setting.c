/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_release_setting.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 01:18:58 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/13 01:39:04 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

int	mouse_release_setting(int button, int x, int y, t_control *ctrl)
{
	if (button == 1 && ctrl->setting->bar_click == true)
	{
		ctrl->setting->bar_click = false;
	}
	return (0);
}
