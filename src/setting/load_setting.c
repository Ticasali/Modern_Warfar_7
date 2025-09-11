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
	add_node_first_setting(ret, img_loader(win, 100, 100, "./texture/setting/bar.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/barre.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/dash.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/down.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/front.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/hide.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/item1.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/item2.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/item3.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/item4.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/jump.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/left.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/loading.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/right.xpm"), 0, 0);
	add_node_setting(ret, img_loader(win, 100, 100,"./texture/setting/shoot.xpm"), 0, 0);
	return (ret);
}

void	add_node_first_setting(t_img *lst, t_img_loader img, int height, int length)
{
	lst->sprite = img.sprite;
	lst->name = img.name;
	lst->x = img.x;
	lst->y = img.y;
	lst->height = height;
	lst->lenght = length;
	lst->next = NULL;
}

void	add_node_setting(t_img *lst, t_img_loader img, int height, int length)
{
	t_img	*cpy;
	t_img	*node;

	node = malloc(sizeof(t_img));
	if (node == NULL)
		return (NULL);
	cpy = lst;
	while (cpy->next != NULL)
		cpy = cpy->next;
	node->sprite = img.sprite;
	node->x = img.x;
	node->y = img.y;
	node->height = height;
	node->lenght = length;
	node->name = img.name;
	node->next = NULL;
	cpy->next = node;
}
