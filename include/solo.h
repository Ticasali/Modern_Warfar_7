/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 08:51:45 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 12:14:40 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLO_H
#define SOLO_H
# include "modern_warfare_7.h"

t_solo	*load_solo(t_window *win);

int		mouse_input_solo(int button, int x, int y, t_control *ctrl);
int		escape_touch_solo(int keycode, t_control *ctrl);
int		solo_render(t_control *ctrl);

void	solo_loop(t_control *ctrl);
void	solo_animation_button(t_control *ctrl);
void	solo_animation_button_reset(t_control *ctrl);

#endif