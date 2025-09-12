/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_game.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:01:44 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 13:58:55 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOAD_GAME_H
# define LOAD_GAME_H
# include "modern_warfare_7.h"

t_window	*load_window(void);

t_input		*load_input(t_window *win);

void		*free_window(t_window *wind);

bool		load_structure(t_control *ctrl);

#endif