/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:34:03 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 15:48:21 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDER_H
#define RENDER_H

typedef struct	s_window
{
	void	*ml;
	void	*win;
}	t_window;

int		key_pressed_game(int keycode, t_control *ctrl);
int		key_release_game(int keycode, t_control *ctrl);
int		game_render(t_control *ctrl);


#endif