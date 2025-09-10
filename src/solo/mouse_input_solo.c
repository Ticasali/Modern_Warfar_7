/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_input_solo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:14:45 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 12:10:32 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

int	mouse_input_solo(int button, int x, int y, t_control *ctrl)
{
	if (button == 1)
	{
		if ((x >= 400 && x <= 700) && (y >= 300 && y <= 400))
			ctrl->solo->statement = 1;
		if ((x >= 400 && x <= 700) && (y >= 50 && y <= 600))
			ctrl->solo->statement = 2;
		if ((x >= 400 && x <= 700) && (y >= 700 && y <= 800))
			ctrl->solo->statement = 3;
	}
	return (0);
}
