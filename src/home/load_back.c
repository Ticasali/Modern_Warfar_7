/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:23:13 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/08 10:41:42 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"

t_anim	*load_background_home(t_window *win, t_anim_loader loader)
{
	t_anim	*back;

	back = malloc(sizeof(t_anim));
	back->sprite = load_aniamtion(win, loader);
	if (back->sprite == NULL)
		return (NULL);
	back->x = 0;
	back->y = 0;
	back->lenght = loader.x;
	back->height	= loader.y;
	back->frame = loader.frame;
	back->name = "background";
	back->fly = false;
	back->next = NULL;
	return (back);
}
