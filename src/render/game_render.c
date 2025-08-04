/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_render.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:37:38 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/05 00:15:12 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/render.h"

int		game_render(t_control *ctrl)
{
	move_player(ctrl->player);
	display__map(ctrl);
	display_player_in_map(ctrl);
}