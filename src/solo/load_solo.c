/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_solo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:13:31 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 11:07:45 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/turbolibx.h"

t_solo	*load_solo(t_window *win)
{
	t_solo	*solo;

	solo = malloc(sizeof(t_solo));
	if (solo == NULL)
		return (NULL);
	solo->statement = 0;
	solo->time = get_time();
	solo->background = load_animation_struct(win,
			anim_loader(1728, 960, 12, "./texture/home/67787c768fd04be4a212dc45a37ec31c"), 0, 0);
	solo->new = load_animation_struct(win,
			anim_loader(300, 100, 6, "./texture"), 300, 200);
	solo->continu = load_animation_struct(win,
			anim_loader(300, 100, 6, "./texture"), 300, 400);
	solo->home = load_animation_struct(win,
			anim_loader(300, 100, 6, "./texture"), 300, 600);
	return (solo);
}
