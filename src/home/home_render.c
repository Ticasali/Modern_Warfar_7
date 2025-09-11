#include "../include/modern_warfare_7.h"
#include "../include/utils.h"
#include "../include/home.h"
#include "../include/turbolibx.h"

int	home_render(t_control *ctrl)
{
	double	time;
	double	test;

	time = get_time();
	test = 0.1;
	if ((time - test) > ctrl->home->time)
	{
		mlx_mouse_get_pos(ctrl->win->ml, ctrl->win->win,
			&ctrl->home->x_mouse, &ctrl->home->y_mouse);
		home_animation_button(ctrl);
		ctrl->home->time = time;
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->home->background->sprite[ctrl->home->background->frame_actual],
			0, 0);
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->home->solo->sprite[ctrl->home->solo->frame_actual],
			400, 300);
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->home->multi->sprite[ctrl->home->multi->frame_actual],
			400, 500);
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->home->quit->sprite[ctrl->home->quit->frame_actual],
			400, 700);
		increase_animation_frame(ctrl->home->background);
	}
	if (ctrl->home->statement == 3 || ctrl->home->statement == 1)
	{
		mlx_loop_end(ctrl->win->ml);
	}
	return (0);
}
