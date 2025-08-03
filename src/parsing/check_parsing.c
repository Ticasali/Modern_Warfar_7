/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 06:39:33 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/03 10:00:46 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

bool	check_parsing(char *pathname, t_data *data)
{
	char	**file;

	file = check_file(pathname);
	if (file == NULL)
		return (false);
	data->north = load_data(file, "NO");
	data->south = load_data(file, "SO");
	data->west = load_data(file, "WE");
	data->east = load_data(file, "EA");
	data->floor = load_data(file, "F");
	data->sky = load_data(file, "C");
}

char	**check_file(char *pathname)
{
	int		fd;
	size_t	file_len;
	char	*str;
	
	fd = open(pathname, O_RDONLY);
	if (fd == -1)
		return (NULL);
	file_len = filelen(fd);
	str = malloc(sizeof(char) * file_len + 1);
	if (str == NULL)
		return (NULL);
	fd = open(pathname, O_RDONLY);
	read(fd, str, file_len);
	return (split(str));
}
