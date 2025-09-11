#ifndef PLAYER_H
# define PLAYER_H
# include "modern_warfare_7.h"

t_player	*load_player(char **map);

double		find_player_pos(char **map, bool check);

void		move_player_front_back(t_player *play);
void		move_player_left_right(t_player *play);
void		move_player_rotate(t_player *play);
void		move_player(t_player *play);

#endif