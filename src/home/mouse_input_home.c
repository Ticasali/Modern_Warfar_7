/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_input_home.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:46:05 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/08 12:47:02 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

int	mouse_input_home(int button, int x, int y, t_control *ctrl)
{
	if (button == 1)
	{
		if ((x >= 500 && x <= 600) && (y >= 150 && y <= 200))
			ctrl->home->statement = 1;
		if ((x >= 500 && x <= 600) && (y >= 250 && y <= 300))
			ctrl->home->statement = 2;
		if ((x >= 500 && x <= 600) && (y >= 350 && y <= 400))
			ctrl->home->statement = 3;
	}
	return (0);
}
