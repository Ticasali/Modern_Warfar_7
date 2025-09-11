/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secure_load_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:31:26 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 20:58:53 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/parsing.h"

bool	check_all_data(t_data *data)
{
	if (data->north == NULL)
		return (free_data_struct(data));
	if (data->south == NULL)
		return (free_data_struct(data));
	if (data->west == NULL)
		return (free_data_struct(data));
	if (data->east == NULL)
		return (free_data_struct(data));
	if (data->floor == NULL)
		return (free_data_struct(data));
	if (data->sky == NULL)
		return (free_data_struct(data));
	if (data->map == NULL)
		return (free_data_struct(data));
	return (true);
}

bool	free_data_struct(t_data *data)
{
	if (data->north != NULL)
		free(data->north);
	if (data->south != NULL)
		free(data->south);
	if (data->west != NULL)
		free(data->west);
	if (data->east != NULL)
		free(data->east);
	if (data->floor != NULL)
		free(data->floor);
	if (data->sky != NULL)
		free(data->sky);
	if (data->map != NULL)
		free(data->map);
	free(data);
	return (false);
}
