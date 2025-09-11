/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:42:04 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/11 18:54:37 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	mlx_putstr(t_control *ctrl, char *str, int x, int y)
{
	size_t	ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->font->font[str[ct]], (ct * 64) + x, y);
		++ct;
	}
}
