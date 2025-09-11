/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_setting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:06:31 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/11 11:10:16 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"
#include "../include/utils.h"


t_setting	*load_setting(t_window *win)
{
	t_setting	*setting;

	setting = malloc(sizeof(t_setting));
	if (setting == NULL)
		return (NULL);
	setting->statement = 0;
	setting->time = get_time();
	setting->x_mouse = 0;
	setting->y_mouse = 0;
	setting->scroll = 0;
	setting->background = load_animation_struct(win,
			anim_loader(1200, 600, 6, "./texture"), 0, 0);
	setting->img = load_setting_img(win);
	return (setting);
}

t_img	*load_setting_img(t_window *win)
{
	t_img	*ret;

	ret = malloc(sizeof(t_img));
	if (ret == NULL)
		return (NULL);
	add_node_first_setting(ret, img_loader(100, 100, "./"), 0, 0);
	add_node_setting(ret, img_loader(100, 100, "./"), 0, 0);
}