/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:08:57 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/05 00:23:22 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PLAYER_H
#define	PLAYER_H
# include "modern_warfare_7.h"

t_player	*load_player(char **map);

double	find_player_pos(char **map, bool check);

#endif