/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_line_for_data.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:05:15 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 17:21:50 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	*pars_line_for_image(char *line_to_pars, t_window *win)
{
	size_t	x = 2;
	while (line_to_pars[x] == ' ')
		++x;
	return (load_image(win, &line_to_pars[x], 64, 64));
}