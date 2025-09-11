#include "../include/modern_warfare_7.h"

int	key_release_game(int keycode, t_control *ctrl)
{
	if (keycode == XK_w)
		ctrl->player->m_front = false;
	if (keycode == XK_q)
		ctrl->player->m_left = false;
	if (keycode == XK_s)
		ctrl->player->m_back = false;
	if (keycode == XK_d)
		ctrl->player->m_right = false;
	if (keycode == XK_a)
		ctrl->player->t_left = false;
	if (keycode == XK_e)
		ctrl->player->t_right = false;
	return (0);
}
