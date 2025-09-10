/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_data_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:05:15 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/10 21:41:52 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/parsing.h"
#include "../include/utils.h"
#include "../include/turbolibx.h"

void	*pars_line_for_image(char *line_to_pars, t_window *win)
{
	size_t	x;

	x = 2;
	while (line_to_pars[x] == ' ')
		++x;
	return (load_image(win, &line_to_pars[x], 64, 64));
}

unsigned char	*pars_line_for_color(char *line_to_pars)
{
	unsigned char	*ret;
	size_t			x;

	ret = malloc(sizeof(unsigned char) * 3);
	if (ret == NULL)
		return (NULL);
	x = 1;
	ret[0] = 0;
	ret[1] = 100;
	ret[2] = 255;
	return (ret);
	// DEBUG FUTUR A FAIRE
	if (ret == NULL)
		return (NULL);
	while (line_to_pars[x] == ' ')
		++x;
	ret[0] = atorgb(&line_to_pars[x]);
	while (line_to_pars[x] != '\0' && line_to_pars[x] != ' ')
		++x;
	if (line_to_pars[x] != '\0')
		return (NULL);
	while (line_to_pars[x] == ' ')
		++x;
	ret[1] = atorgb(&line_to_pars[x]);
	while (line_to_pars[x] != '\0' || line_to_pars[x] != ' ')
		++x;
	if (line_to_pars[x] != '\0')
		return (NULL);
	while (line_to_pars[x] == ' ')
		++x;
	ret[2] = atorgb(&line_to_pars[x]);
	return (ret);
}
