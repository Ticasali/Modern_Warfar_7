/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:12:40 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 15:49:45 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

t_player	*load_player(char **map)
{
	t_player	*play;

	play = malloc(sizeof(t_player));
	if (play == NULL)
		return (NULL);
	play->x = find_player_pos(map, true);
	play->y = find_player_pos(map, false);
	play->m_back = false;
	play->m_front = false;
	play->m_left = false;
	play->m_right = false;
	return (play);
}