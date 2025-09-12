/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transparency.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:59:32 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 17:04:25 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

size_t	get_pixel_img(t_trspy tr, int x, int y)
{
	return (*(size_t *)((tr.addr
			+ (y * tr.line_len) + (x * tr.bpp / 8))));
}

void	put_pixel_img(t_trspy img, int x, int y, int color)
{
	char	*dst;

	if (color == (int)0xFF000000)
		return ;
	if (x >= 0 && y >= 0 && x < img.x && y < img.y)
	{
		dst = img.addr + (y * img.line_len + x * (img.bpp / 8));
		*(unsigned int *) dst = color;
	}
}

void	put_img_to_img(t_trspy dst, t_trspy src, int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < src.x)
	{
		j = 0;
		while (j < src.y)
		{
			put_pixel_img(dst, x + i, y + j, get_pixel_img(src, i, j));
			j++;
		}
		i++;
	}
}

t_trspy	load_transparency(void *ptr, int x, int y)
{
	t_trspy	tr;

	tr.addr = mlx_get_data_addr(ptr, &(tr.bpp), &(tr.line_len), &(tr.endian));
	tr.y = y;
	tr.x = x;
	return (tr);
}
