#ifndef SETTING_H
# define SETTING_H
# include "modern_warfare_7.h"

t_setting	*load_setting(t_window *win);

int			mouse_input_setting(int button, int x, int y, t_control *ctrl);
int			escape_touch_setting(int keycode, t_control *ctrl);
int			setting_render(t_control *ctrl);

void		setting_loop(t_control *ctrl);

#endif