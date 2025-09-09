/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_setting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:06:31 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 14:44:41 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/turbolibx.h"

t_setting	*load_setting(t_window *win)
{
	t_setting	*setting;

	setting = malloc(sizeof(t_setting));
	if (setting == NULL)
		return (NULL);
	setting->statement = 0;
	setting->time = 0;
	setting->background = load_animation_struct(win,
			anim_loader(1200, 600, 6, "./texture"), 0, 0);
	setting->button	= load_animation_struct(win,
			anim_loader(300, 100, 6, "./texture"), 300, 200);
	return (setting);
}
