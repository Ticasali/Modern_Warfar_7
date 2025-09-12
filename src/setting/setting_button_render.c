/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_button_render.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:16:16 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 18:27:54 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/utils.h"

void	setting_button_render(t_control *ctrl)
{
	t_image	*lst;

	lst = ctrl->setting->img;
	while (lst != NULL)
	{
		if (!ft_strcmp(lst->name, "bar")
			&& !ft_strcmp(lst->name, "barre"))
		{
			if (((lst->y - ctrl->setting->scroll) < 960)
				&& ((lst->y - ctrl->setting->scroll) > 0))
			{
			mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
				lst->sprite, lst->x, lst->y - ctrl->setting->scroll);
			}
		}
		else
		{
			mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
				lst->sprite, lst->x, lst->y);
		}
		lst = lst->next;
	}
}
