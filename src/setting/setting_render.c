#include "../include/modern_warfare_7.h"
#include "../include/utils.h"

int	setting_render(t_control *ctrl)
{
	double	time;
	double	test;

	time = get_time();
	test = 0.1;
	if ((time - test) > ctrl->setting->time)
	{
		mlx_mouse_get_pos(ctrl->win->ml, ctrl->win->win,
			&ctrl->setting->x_mouse, &ctrl->setting->y_mouse);
//		menu_animation_button(ctrl);
		ctrl->setting->time = time;
//		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
//			ctrl->setting->background[ctrl->setting->actual_frame], 0, 0);
		if (ctrl->setting->background->frame_actual < 6)
			++ctrl->setting->background->frame_actual;
		else
			ctrl->setting->background->frame_actual = 0;
	}
	if (ctrl->setting->statement == 3 || ctrl->setting->statement == 1)
		mlx_loop_end(ctrl->win->ml);
	return (0);
}
