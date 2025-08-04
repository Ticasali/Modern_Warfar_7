/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:32:10 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 11:53:55 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

double	get_time(void)
{
	char	*str_time;
	double	ret;
	int		fd;

	str_time = malloc(sizeof(char) * 11);
	if (str_time == NULL)
		return (-1);
	fd = open("/proc/uptime", O_RDONLY);
	if (fd <= 0)
	{
		free(str_time);
		return (-1);
	}
	read(fd, str_time, 10);
	ret = atod(str_time);
	if (close(fd) == -1)
		return (-1);
	free(str_time);
	return (ret);
}
