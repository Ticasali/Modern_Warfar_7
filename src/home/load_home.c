#include "../include/modern_warfare_7.h"
#include "../include/utils.h"
#include "../include/turbolibx.h"

t_home	*load_home(t_window *win)
{
	t_home	*home;

	home = malloc(sizeof(t_home));
	if (home == NULL)
		return (NULL);
	home->statement = 0;
	home->time = get_time();
	home->background = load_animation_struct(win,
			anim_loader(1728, 960, 12,
				"./texture/home/67787c768fd04be4a212dc45a37ec31c"), 0, 0);
	home->solo = load_animation_struct(win,
			anim_loader(400, 100, 5, "./texture/home/solo"), 300, 200);
	home->multi = load_animation_struct(win,
			anim_loader(400, 100, 8, "./texture/home/settng"), 300, 400);
	home->quit = load_animation_struct(win,
			anim_loader(400, 100, 5, "./texture/home/exit"), 300, 600);
	return (home);
}
