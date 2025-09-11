#include "../include/modern_warfare_7.h"
#include "../include/game.h"
#include "../include/player.h"

int	game_render(t_control *ctrl)
{
	move_player(ctrl->player);
	display_map(ctrl);
	display_player_in_map(ctrl);
	return (1);
}
