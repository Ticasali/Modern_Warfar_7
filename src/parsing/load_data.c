/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:11:30 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 20:58:20 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/parsing.h"

t_data	*load_data(char **file, t_control *ctrl)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (data == NULL)
		return (NULL);
	data->north = load_data_sprite(file, "NO", ctrl);
	data->south = load_data_sprite(file, "SO", ctrl);
	data->west = load_data_sprite(file, "WE", ctrl);
	data->east = load_data_sprite(file, "EA", ctrl);
	data->floor = load_data_color(file, 'F');
	data->sky = load_data_color(file, 'C');
	data->map = get_map(file);
	if (check_all_data(data) == false)
		return (NULL);
	return (data);
}

void	*load_data_sprite(char **map, char const *to_find, t_control *ctrl)
{
	size_t	y;

	y = 0;
	while (map[y] != NULL)
	{
		if ((map[y][0] == to_find[0]) && (map[y][1] == to_find[1]))
			return (pars_line_for_image(map[y], ctrl->win));
		++y;
	}
	return (NULL);
}

unsigned char	*load_data_color(char **map, char to_find)
{
	size_t	y;

	y = 0;
	while (map[y] != NULL)
	{
		if (map[y][0] == to_find)
			return (pars_line_for_color(map[y]));
		++y;
	}
	return (NULL);
}
