/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_animation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ticasali <ticasali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:21:14 by ticasali          #+#    #+#             */
/*   Updated: 2025/09/09 19:59:29 by ticasali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/modern_warfare_7.h"
# include "../include/turbolibx.h"
# include "../include/utils.h"


char	*concat_animation_path(char *path, size_t num)
{
	char	*ret;
	size_t	ct;

	ct = 0;
	ret = malloc(sizeof(char) * ft_strlen(path) + 50);
	if (ret == NULL)
		return (NULL);
	while (path[ct] != '\0')
	{
		ret[ct] = path[ct];
		++ct;
	}
	ret[ct] = '-';
	while (num >= 10)
	{
		ret[++ct] = (num / count_expand(num)) + 48;
		num = num % 10;
	}
	ret[++ct] = num + 48;
	ret[++ct] = '.';
	ret[++ct] = 'x';
	ret[++ct] = 'p';
	ret[++ct] = 'm';
	ret[++ct] = '\0';
	return (ret);
}

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
	ret = malloc(sizeof(void *) * anim.frame + 8);
	if (ret == NULL)
		return (NULL);
	while (ct < anim.frame)
	{
		path = concat_animation_path(anim.path, ct);
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
