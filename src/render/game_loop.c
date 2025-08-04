/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:59:00 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 15:37:10 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	game(t_control	*ctrl)
{
	mlx_hook(ctrl->win->win, KeyPress, KeyPressMask, key_pressed_game, ctrl);
	mlx_hook(ctrl->win->win, KeyRelease, KeyReleaseMask, key_release_game, ctrl);
//	mlx_hook(ctrl->win->win, ButtonPress, ButtonPressMask, button_click ,ctrl);
	mlx_loop_hook(ctrl->win->ml, game_render, ctrl);
	mlx_loop(ctrl->win->ml);
}