/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:16:40 by ticasali          #+#    #+#             */
/*   Updated: 2025/08/04 17:21:30 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"

void	*load_image(t_window *win, char *path, int x, int y)
{
	void	*ret;

	ret = mlx_xpm_file_to_image(win->ml, path, &x, &y);
	return (ret);
}
