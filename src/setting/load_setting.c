/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_setting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:06:31 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 18:19:48 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"
#include "../include/utils.h"
#include "../include/setting.h"


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
			anim_loader(1728, 960, 12,
				"./texture/home/67787c768fd04be4a212dc45a37ec31c"), 0, 0);
	setting->img = load_setting_img(win);
	return (setting);
}

t_image	*load_setting_img(t_window *win)
{
	t_image	*ret;

	ret = malloc(sizeof(t_image));
	if (ret == NULL)
		return (NULL);
	add_node_first_setting(ret, img_loader(win, 50, 960, "./texture/setting/bar.xpm"), 1678, 0);
	add_node_setting(ret, img_loader(win, 45, 200,"./texture/setting/barre.xpm"), 1680, 10);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/dash.xpm"), 200, 200);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/down.xpm"), 800, 200);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/front.xpm"), 200, 400);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/shoot.xpm"), 800, 400);
//	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/hide.xpm"), 800, 400);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/item1.xpm"), 200, 600);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/item2.xpm"), 800, 600);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/item3.xpm"), 200, 800);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/item4.xpm"), 800, 800);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/jump.xpm"), 200, 1000);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/left.xpm"), 800, 1000);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/loading.xpm"), 200, 1200);
	add_node_setting(ret, img_loader(win, 200, 100,"./texture/setting/right.xpm"), 800, 1200);
	return (ret);
}

void	add_node_first_setting(t_image *lst, t_img_loader img, int x, int y)
{
	lst->sprite = img.sprite;
	lst->name = img.name;
	lst->x = x;
	lst->y = y;
	lst->height = img.y;
	lst->lenght = img.x;
	lst->next = NULL;
}

void	add_node_setting(t_image *lst, t_img_loader img, int x, int y)
{
	t_image	*cpy;
	t_image	*node;

	node = malloc(sizeof(t_image));
	if (node == NULL)
		return ;
	cpy = lst;
	while (cpy->next != NULL)
		cpy = cpy->next;
	node->sprite = img.sprite;
	node->x = x;
	node->y = y;
	node->height = img.y;
	node->lenght = img.x;
	node->name = img.name;
	node->next = NULL;
	cpy->next = node;
}
