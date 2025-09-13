/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_cursor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:23:30 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/13 15:26:21 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"

t_image	*load_setting_cursor(t_window *win)
{
	t_image	*ret;

	ret = malloc(sizeof(t_image));
	if (ret == NULL)
	add_node_first_setting(ret, img_loader(win, 200, 100,"./texture/setting/cursor.xpm"), 500, 1400);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/cursor.xpm"), 500, 1600);
	return (ret);
}
