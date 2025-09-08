/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_home.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 08:47:47 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/08 09:18:17 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/turbolibx.h"

t_menu	*load_home(t_window *win)
{
	t_menu	*home;
	t_anim	temp;

	home = malloc(sizeof(t_menu));
	if (home == NULL)
		return (NULL);
	home->statement = 0;
	temp.x = 1200;
	temp.y = 600;
	temp.frame = 
	home->background = load_animation(win, );
}
