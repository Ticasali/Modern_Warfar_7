/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   home.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 12:25:59 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 14:46:58 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOME_H
#define HOME_H
# include "modern_warfare_7.h"

t_home	*load_home(t_window *win);

int		escape_touch_home(int keycode, t_control *ctrl);
int		home_render(t_control *ctrl);
int		mouse_input_home(int button, int x, int y, t_control *ctrl);

void	home_animation_button(t_control *ctrl);
void	home_animation_button_reset(t_control *ctrl);
void	home_loop(t_control *ctrl);

#endif