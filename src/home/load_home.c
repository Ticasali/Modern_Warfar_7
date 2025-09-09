/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_home.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 08:47:47 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 17:12:12 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/utils.h"
# include "../include/turbolibx.h"

t_home	*load_home(t_window *win)
{
	t_home	*home;

	home = malloc(sizeof(t_home));
	if (home == NULL)
		return (NULL);
	home->statement = 0;
	home->time = get_time();
	home->background = load_animation_struct(win,
			anim_loader(1728, 960, 74, "./texture/home/67787c768fd04be4a212dc45a37ec31c"), 0, 0);
//	home->solo	= load_animation_struct(win,
//			anim_loader(300, 100, 6, "./texture/home/solo"), 300, 200);
//	home->multi	= load_animation_struct(win,
//			anim_loader(300, 100, 6, "./texture/home/multi"), 300, 400);
//	home->quit = load_animation_struct(win,
//			anim_loader(300, 100, 6, "./texture/home/quit"), 300, 600);
	return (home);
}
