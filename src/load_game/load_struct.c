/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:43:22 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 12:19:03 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/home.h"
#include "../include/player.h"
#include "../include/solo.h"

bool	load_structure(t_control *ctrl)
{
	ctrl->player = load_player(ctrl->data->map);
	if (ctrl->player == NULL)
		return (false); //Turbo Free
	ctrl->home = load_home(ctrl->win);
	if (ctrl->home == NULL)
		return (false); //Turbo Free
	ctrl->solo = load_solo(ctrl->win);
	if (ctrl->solo == NULL)
		return (false); //Turbo Free
	return (true);
}