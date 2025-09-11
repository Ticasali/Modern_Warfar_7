#ifndef LOAD_GAME_H
# define LOAD_GAME_H
# include "modern_warfare_7.h"

t_window	*load_window(void);

void		*free_window(t_window *wind);

bool		load_structure(t_control *ctrl);

#endif