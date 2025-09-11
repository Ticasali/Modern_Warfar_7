#include "../include/modern_warfare_7.h"
#include "../include/home.h"
#include "../include/turbolibx.h"

void	home_animation_button(t_control *ctrl)
{
	if (ctrl->home->x_mouse >= 400 && ctrl->home->x_mouse <= 700
		&& ctrl->home->y_mouse >= 300 && ctrl->home->y_mouse <= 400)
	{
		increase_animation_frame(ctrl->home->solo);
		reset_animation_frame(ctrl->home->multi);
		reset_animation_frame(ctrl->home->quit);
	}
	else if (ctrl->home->x_mouse >= 400 && ctrl->home->x_mouse <= 700
		&& ctrl->home->y_mouse >= 500 && ctrl->home->y_mouse <= 600)
	{
		increase_animation_frame(ctrl->home->multi);
		reset_animation_frame(ctrl->home->solo);
		reset_animation_frame(ctrl->home->quit);
	}
	else if (ctrl->home->x_mouse >= 400 && ctrl->home->x_mouse <= 700
		&& ctrl->home->y_mouse >= 700 && ctrl->home->y_mouse <= 800)
	{
		increase_animation_frame(ctrl->home->quit);
		reset_animation_frame(ctrl->home->solo);
		reset_animation_frame(ctrl->home->multi);
	}
	else
		home_animation_button_reset(ctrl);
}

void	home_animation_button_reset(t_control *ctrl)
{
	reset_animation_frame(ctrl->home->solo);
	reset_animation_frame(ctrl->home->multi);
	reset_animation_frame(ctrl->home->quit);
}
