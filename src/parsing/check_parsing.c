/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 06:39:33 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 18:35:31 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

bool	check_parsing(char *pathname, t_control *ctrl)
{
	char	**file;

	file = check_file(pathname);
	if (file == NULL)
		return (false);
	ctrl->data = load_data(file, ctrl);
	return (true);
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
