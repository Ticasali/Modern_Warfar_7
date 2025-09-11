#ifndef HOME_H
# define HOME_H
# include "modern_warfare_7.h"

t_home	*load_home(t_window *win);

int		escape_touch_home(int keycode, t_control *ctrl);
int		home_render(t_control *ctrl);
int		mouse_input_home(int button, int x, int y, t_control *ctrl);

void	home_animation_button(t_control *ctrl);
void	home_animation_button_reset(t_control *ctrl);
void	home_loop(t_control *ctrl);

#endif