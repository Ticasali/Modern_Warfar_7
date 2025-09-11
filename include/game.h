
#ifndef GAME_H
# define GAME_H
# include "modern_warfare_7.h"

void	*free_window(t_window *wind);

int		key_pressed_game(int keycode, t_control *ctrl);
int		key_release_game(int keycode, t_control *ctrl);
int		game_render(t_control *ctrl);

void	display_map(t_control *ctrl);
void	display_player_in_map(t_control *ctrl);
void	move_player(t_player *play);
void	move_player_front_back(t_player *play);
void	move_player_left_right(t_player *play);
void	move_player_rotate(t_player *play);
void	game(t_control	*ctrl);

#endif