#include "../include/modern_warfare_7.h"
#include "../include/player.h"

t_player	*load_player(char **map)
{
	t_player	*play;

	play = malloc(sizeof(t_player));
	if (play == NULL)
		return (NULL);
	play->pos_x = 4;//find_player_pos(map, true);
	play->pos_y = 4;//find_player_pos(map, false);
	play->m_back = false;
	play->m_front = false;
	play->m_left = false;
	play->m_right = false;
	play->delta_x = 0.1;
	play->delta_y = 0.1;
	return (play);
}

double	find_player_pos(char **map, bool check)
{
	size_t	x;
	size_t	y;

	y = 0;
	while (map[y] != NULL)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == 'P')
			{
				if (check == true)
					return ((x * 64) + 32);
				if (check == true)
					return ((y * 64) + 32);
			}
			++x;
		}
		++y;
	}
	return (-1);
}
