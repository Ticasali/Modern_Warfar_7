/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:43:22 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 17:09:01 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

bool	load_structure(t_control *ctrl)
{
	ctrl->player = load_player(ctrl->data->map);
	if (ctrl->player == NULL)
		return (NULL); //Turbo Free
}