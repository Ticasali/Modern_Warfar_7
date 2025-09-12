/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scrolling_system.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 21:47:58 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 22:22:58 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"
#include "../include/setting.h"

t_image	*load_setting_bar(t_window *win)
{
	t_image	*ret;

	ret = malloc(sizeof(t_image));
	if (ret == NULL)
		return (NULL);
	add_node_first_setting(ret, img_loader(win, 45, 425,"./texture/setting/barre.xpm"), 1680, 0);
	return (ret);
}

t_image	*load_setting_bar_b(t_window *win)
{
	t_image	*ret;

	ret = malloc(sizeof(t_image));
	if (ret == NULL)
		return (NULL);
	add_node_first_setting(ret, img_loader(win, 50, 960,"./texture/setting/bar.xpm"), 1678, 0);
	return (ret);
}
