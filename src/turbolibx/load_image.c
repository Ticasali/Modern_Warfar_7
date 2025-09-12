/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:16:40 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/12 19:46:19 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/modern_warfare_7.h"
#include "../include/utils.h"

void	*load_image(t_window *win, char *path, int x, int y)
{
	void	*ret;

	ret = mlx_xpm_file_to_image(win->ml, path, &x, &y);
	return (ret);
}

void	*load_image_free_path(t_window *win, char *path, int x, int y)
{
	void	*ret;

	ret = mlx_xpm_file_to_image(win->ml, path, &x, &y);
	free(path);
	return (ret);
}

char	*get_texture_name(char *path)
{
	size_t	ct;

	ct = 0;
	while (path[ct] != '\0')
		++ct;
	while (path[ct] != 47)
		--ct;
	return (&path[ct + 1]);
}

t_img_loader	img_loader(t_window *win, int x, int y, char *path)
{
	t_img_loader	ret;

	ret.x = x;
	ret.y = y;
	ret.sprite = load_image(win, path, x, y);
	ret.name = get_texture_name(path);
	return (ret);
}
