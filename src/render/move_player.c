/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:44:08 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 18:46:23 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	move_player(t_player *play)
{
	if (play->m_back == true)
		++play->y;
	if (play->m_front == true)
		--play->y;
	if (play->m_left == true)
		--play->x;
	if (play->m_right == true)
		++play->x;
}