/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:08:57 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 19:54:29 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PLAYER_H
#define	PLAYER_H

typedef struct	s_player
{
	double	x;
	double	y;
	bool	m_front;
	bool	m_back;
	bool	m_left;
	bool	m_right;
}	t_player;

t_player	*load_player(char **map);

double	find_player(char **map, bool check);

#endif