/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:12:40 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/05 00:14:46 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/player.h"

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

double	find_player_pos(char **map, bool check)
{
	size_t	x;
	size_t	y;

	y = 0;
	while (map[y] != NULL)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == 'P')
			{
				if (check == true)
					return ((x * 64) + 32);
				if (check == true)
					return ((y * 64) + 32);
			}
			++x;
		}
		++y;
	}
	return (-1);
}
