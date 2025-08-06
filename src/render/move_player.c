/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:44:08 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/06 15:54:54 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"

void	move_player(t_player *play)
{
	move_player_front_back(play);
	move_player_left_right(play);
	move_player_rotate(play);
}

void	move_player_front_back(t_player *play)
{
	if (play->m_back == true)
	{
		play->pos_x -= play->delta_x;
		play->pos_y -= play->delta_y;
	}
	if (play->m_front == true)
	{
		play->pos_x += play->delta_x;
		play->pos_y += play->delta_y;
	}
}

void	move_player_left_right(t_player *play)
{
	if (play->m_left == true)
	{
		play->pos_x -= 0.01;
	}
	if (play->m_right == true)
	{
		play->pos_x += 0.01;
	}
}

void	move_player_rotate(t_player *play)
{
	if (play->t_left == true)
	{
		play->angle -= 0.1;
		if (play->angle < 0)
			play->angle = (M_PI * 2);
		play->delta_x = cos(play->angle);
		play->delta_y = sin(play->angle);
	}
	if (play->t_right == true)
	{
		play->angle -= 0.1;
		if (play->angle < 0)
			play->angle = (M_PI * 2);
		play->delta_x = cos(play->angle);
		play->delta_y = sin(play->angle);
	}
}
