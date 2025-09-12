/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_putkey_code.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:12:27 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 16:47:38 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/turbolibx.h"
#include "../include/utils.h"

int	mlx_putkey_code(int keycode, t_control *ctrl)
{
	ft_putnbr(keycode);
	return (0);
}

int	mlx_putkey_code_img(int keycode, t_control *ctrl, int x, int y)
{
	mlx_putnbr(ctrl, keycode, x, y);
	return (0);
}
