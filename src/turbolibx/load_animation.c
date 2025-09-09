/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_animation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:21:14 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 14:13:48 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/turbolibx.h"

t_anim_loader	anim_loader(int x, int y, int frame, char *path)
{
	t_anim_loader	ret;

	ret.x = x;
	ret.y = y;
	ret.frame = frame;
	ret.path = path;
	return (ret);
}

void	**load_animation(t_window *win, t_anim_loader anim)
{
	void	**ret;
	char	*path;
	size_t	ct;

	ct = 0;
	ret = malloc(sizeof(void *) * anim.frame);
	if (ret == NULL)
		return (NULL);
	while (ct < anim.frame)
	{
		path = concat_animation_path(path, ct);
		if (path == NULL)
		{
			free(ret);
			return (NULL);
		}
		ret[ct] = load_image_free_path(win, path, anim.x, anim.y);
		++ct;
	}
	return (ret);
}

t_anim	*load_animation_struct(t_window *win, t_anim_loader loader, int x, int y)
{
	t_anim	*anim;

	anim = malloc(sizeof(t_anim));
	anim->sprite = load_animation(win, loader);
	if (anim->sprite == NULL)
		return (NULL);
	anim->x = x;
	anim->y = y;
	anim->lenght = loader.x;
	anim->height = loader.y;
	anim->frame_max = loader.frame;
	anim->frame_actual = 0;
	return (anim);
}
