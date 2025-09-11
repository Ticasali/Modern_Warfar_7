#include "../include/modern_warfare_7.h"
#include "../include/parsing.h"

char	**get_map(char	**file)
{
	size_t	y;
	size_t	x;
	char	**map;

	y = 0;
	map = malloc(sizeof(char *) * 9);
	if (map == NULL)
		return (NULL);
	while (y < 8)
	{
		x = 0;
		map[y] = malloc(sizeof(char) * 9);
		while (x < 8)
		{
			if (y == 0 || x == 0 || y == 7 || x == 7)
				map[y][x] = '1';
			else
				map[y][x] = '0';
			++x;
		}
		map[y][x] = '\0';
		++y;
	}
	map[y] = NULL;
	return (map);
}
