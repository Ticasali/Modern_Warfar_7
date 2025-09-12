/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_putnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:55:04 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 16:49:38 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"
#include "../include/utils.h"
#include "limits.h"

void	mlx_putnbr(t_control *ctrl, int num, int x, int y)
{
	size_t	ct;

	ct = 0;
	if (num == INT_MIN)
	{
		mlx_putstr(ctrl, "-2147483648", x, y);
		return ;
	}
	if (num < 0)
	{
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->font->font[45], (ct * 64) + x, y);
		num *= -1;
		++ct;
	}
	while (num >= 10)
	{
		mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->font->font[(num / count_expand(num) + 48)], (ct * 64) + x, y);
		num = num % 10;
		++ct;
	}
	mlx_put_image_to_window(ctrl->win->ml, ctrl->win->win,
			ctrl->font->font[num + 48], (ct * 64) + x, y);
}
