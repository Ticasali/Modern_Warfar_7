/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_input_solo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:14:45 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 11:19:45 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

int	mouse_input_solo(int button, int x, int y, t_control *ctrl)
{
	if (button == 1)
	{
		if ((x >= 500 && x <= 600) && (y >= 150 && y <= 200))
			ctrl->solo->statement = 1;
		if ((x >= 500 && x <= 600) && (y >= 250 && y <= 300))
			ctrl->solo->statement = 2;
		if ((x >= 500 && x <= 600) && (y >= 350 && y <= 400))
			ctrl->solo->statement = 3;
	}
	return (0);
}
