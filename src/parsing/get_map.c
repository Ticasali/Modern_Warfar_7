/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 00:34:47 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/05 00:38:35 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/parsing.h"

char	**get_map(char	**file)
{
	size_t	y = 0;
	size_t	x;
	char	**map = malloc(sizeof(char *) * 9);
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